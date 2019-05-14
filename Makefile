#compile and link the application
all: tutorial

#run the application
run: tutorial
	./tutorial

#link the application
#input: tutorial.o
#output using -o: tutorial
#-g: include debug information in the output .o file
#-l: link a library, -lm means links the math library
tutorial: tutorial.o
	g++ -g -lm -o tutorial tutorial.o

#compile the application
#input: tutorial.cpp
#output: tutorial.o
#-c: compile the input
#-g: include debug information in the output .o file
tutorial.o: tutorial.cpp
	g++ -g -c tutorial.cpp

#remove built files
clean:
	rm -rf tutorial tutorial.o *~
