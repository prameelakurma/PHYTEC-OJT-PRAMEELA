all:div.o app.o app run
app:div.o app.o
	gcc app.o div.o -o app
div.o:div.c
	gcc -c div.c
app.o:app.c
	gcc -c app.c
run:
	./app
