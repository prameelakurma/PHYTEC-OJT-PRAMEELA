all:app.o sb.o app run
app:app.o sb.o
	gcc app.o sb.o -o app
app.o:app.c
	gcc -c app.c
sb.o:sb.c
	gcc -c sb.c
run:
	./app

