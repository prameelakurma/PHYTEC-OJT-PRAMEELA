all:app.o sorting.o app run
app:app.o sorting.o
	gcc app.o sorting.o -o app
app.o:app.c
	gcc -c app.c
sorting.o:sorting.c
	gcc -c sorting.c
run:
	./app

