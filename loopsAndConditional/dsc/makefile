all:app.o dsc.o app run
app:app.o dsc.o
	gcc app.o dsc.o -o app
app.o:app.c
	gcc -c app.c
dsc.o:dsc.c
	gcc -c dsc.c
run:
	./app


