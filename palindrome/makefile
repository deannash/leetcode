all: run.exe

run.exe: palindrome_num.o
	 gcc -o run.exe palindrome_num.o 

palindrome_num.o: palindrome_num.c
	 gcc -c palindrome_num.c
     
clean:
	 rm palindrome_num.o run.exe
