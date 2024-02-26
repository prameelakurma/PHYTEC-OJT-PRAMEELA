all:app.o even.o app run
app:app.o even.o
	gcc app.o even.o -o app
app.o:app.c
	gcc -c app.c
even.o:even.c
	gcc -c even.c
run:
	./app
