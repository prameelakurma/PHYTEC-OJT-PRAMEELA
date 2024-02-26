all:app.o sum.o app run
app:app.o sum.o
	gcc app.o sum.o -o app
app.o:app.c
	gcc -c app.c
sum.o:sum.c
	gcc -c sum.c
run:
	./app


