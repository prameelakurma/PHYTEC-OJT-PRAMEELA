all:app.o binary.o app run
app:app.o binary.o
	gcc app.o binary.o -o app
app.o:app.c
	gcc -c app.c
binary.o:binary.c
	gcc -c binary.c
run:
	./app

