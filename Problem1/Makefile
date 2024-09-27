# Target to compile the object file
fizzBuzz: fizzBuzz.o
	g++ fizzBuzz.o -o fizzBuzz.exe

# Target to compile the C++ program
fizzBuzz.o: fizzBuzz.cpp
	g++ -c fizzBuzz.cpp -o fizzBuzz.o

# Target to run the program (interactively)
run: fizzBuzz
	./fizzBuzz.exe

# Target to compile the object Test file
fizzBuzzTest: fizzBuzzTest.o
	g++ fizzBuzzTest.o -o fizzBuzzTest.exe

# Target to compile the C++ Test program
fizzBuzzTest.o: fizzBuzzTest.cpp
	g++ -c fizzBuzzTest.cpp -o fizzBuzzTest.o

# Target to run the Test program
test: fizzBuzzTest
	./fizzBuzzTest.exe

# Target to clean up compiled files
clean:
	rm -f fizzBuzz.o fizzBuzzTest.o fizzBuzz.exe fizzBuzzTest.exe
