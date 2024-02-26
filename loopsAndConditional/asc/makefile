all:asc.o app.o app run
app:asc.o app.o
	gcc app.o asc.o -o app
asc.o:asc.c
	gcc -c asc.c
app.o:app.c
	gcc -c app.c
run:
	./app
