all: run.exe

run.exe: zigzag_conversation.o
	 gcc -o run.exe zigzag_conversation.o

zigzag_conversation.o: zigzag_conversation.c
	 gcc -c zigzag_conversation.c
     
clean:
	 rm zigzag_conversation.o run.exe
