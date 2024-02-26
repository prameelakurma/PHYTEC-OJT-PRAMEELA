all:app.o bit.o app run
app:app.o bit.o
	gcc app.o bit.o -o app
app.o:app.c
	gcc -c app.c
bit.o:bit.c
	gcc -c bit.c
run:
	./app
