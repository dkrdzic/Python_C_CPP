exec: all
	python sum.py

all: compile
	gcc -shared sum.o sum_wrap.o -o  _sum_module.so
#jako bitno da .so file ima _ na poctku imena

compile:
	gcc -fpic -c sum.c sum_wrap.c -I/home/****/.pyenv/versions/3.9.2/include/python3.9



i:
	cpp sum.c -o sum.i

swig:
	swig -python sum.i


Python.h:
	python-config --cflags
