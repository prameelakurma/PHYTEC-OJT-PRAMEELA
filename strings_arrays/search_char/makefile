all:app.o search.o app run
app:app.o search.o
	gcc app.o search.o -o app
app.o:app.c
	gcc -c app.c
search.o:search.c
	gcc -c search.c
run:
	./app
