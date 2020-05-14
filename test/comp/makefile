DEPS= secondary.h
cc=g++
all: ..\main.exe

..\main.exe: main.o secondary.o
	g++ -Wall main.o secondary.o -o ..\main.exe

main.o: ..\main.cpp
	g++ -c ..\main.cpp

secondary.o: ..\secondary.cpp
	g++ -c ..\secondary.cpp
	
clean:
	del *.o