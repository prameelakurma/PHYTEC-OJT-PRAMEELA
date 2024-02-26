all:app.o asci.o app run
app:app.o asci.o
	gcc app.o asci.o -o app
app.o:app.c
	gcc -c app.c
asci.o:asci.c
	gcc -c asci.c
run:
	./app

