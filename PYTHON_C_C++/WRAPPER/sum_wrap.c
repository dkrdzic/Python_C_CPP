
#include "Python.h"

#include "sum.h"

PyObject *wrap_sum(PyObject *self, PyObject *args)
{

    PyObject *resultObj;
    double a, b, result;

    PyArg_ParseTuple(args, "dd", &a, &b);

    result = sum(a, b);

    resultObj = Py_BuildValue("d", result);

    return resultObj;
}

static PyMethodDef sumMethod[] = {

    {"sum", wrap_sum, METH_VARARGS}, //definisi ime funkcije koju hoces da povezes i wrapper
    {NULL, NULL}

};

static struct PyModuleDef sum_module = //definisi ime modula koji ces importovati
    {
        PyModuleDef_HEAD_INIT,
        "sum_module",
        "",
        -1,
        sumMethod

};

PyMODINIT_FUNC PyInit_sum_module()
{

    return PyModule_Create(&sum_module);
}
