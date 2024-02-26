all:app.o len.o app run
app:app.o len.o
	gcc app.o len.o -o app
app.o:app.c
	gcc -c app.c
len.o:len.c
	gcc -c len.c
run:
	./app

