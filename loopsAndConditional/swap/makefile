all:app.o swap.o app run
app:app.o swap.o
	gcc app.o swap.o -o app
app.o:app.c
	gcc -c app.c
swap.o:swap.c
	gcc -c swap.c
run:
	./app
