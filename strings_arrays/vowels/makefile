all:app.o vowels.o app run
app:app.o vowels.o
	gcc app.o vowels.o -o app
app.o:app.c
	gcc -c app.c
vowels.o:vowels.c
	gcc -c vowels.c
run:
	./app

