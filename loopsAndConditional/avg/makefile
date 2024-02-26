all:app.o avg.o app run
app:app.o avg.o
	gcc app.o avg.o -o app
app.o:app.c
	gcc -c app.c
avg.o:avg.c
	gcc -c avg.c
run:
	./app
