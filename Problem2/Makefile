# Target to compile the object file
reverse_array: reverse_array.o
	g++ reverse_array.o -o reverse_array.exe

# Target to compile the C++ program
reverse_array.o: reverse_array.cpp
	g++ -c reverse_array.cpp -o reverse_array.o

# Target to run the program (interactively)
run: reverse_array
	./reverse_array.exe

# Target to compile the object Test file
reverse_arrayTest: reverse_arrayTest.o
	g++ reverse_arrayTest.o -o reverse_arrayTest.exe

# Target to compile the C++ Test program
reverse_arrayTest.o: reverse_arrayTest.cpp
	g++ -c reverse_arrayTest.cpp -o reverse_arrayTest.o

# Target to run the Test program
test: reverse_arrayTest
	./reverse_arrayTest.exe

# Target to clean up compiled files
clean:
	rm -f reverse_array.o reverse_arrayTest.o reverse_array.exe reverse_arrayTest.exe
