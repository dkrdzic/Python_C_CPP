
exec: all
	python sum.py

all: compile
	gcc -shared sum.o sum_wrap.o -o  sum_module.so


compile:
	gcc -fpic -c -I/usr/include/python3.9 -c sum.c sum_wrap.c