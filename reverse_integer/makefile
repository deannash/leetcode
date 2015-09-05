all: run.exe

run.exe: reverse_int.o
	 gcc -o run.exe reverse_int.o

reverse_int.o: reverse_int.c
	 gcc -c reverse_int.c
     
clean:
	 rm reverse_int.o run.exe
