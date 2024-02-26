all:app.o upper.o app run
app:app.o upper.o
	gcc app.o upper.o -o app
app.o:app.c
	gcc -c app.c
upper.o:upper.c
	gcc -c upper.c
run:
	./app

