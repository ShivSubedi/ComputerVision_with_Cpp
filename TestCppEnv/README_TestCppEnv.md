
You can use this directory as a first platform to test running the C++ script 
There was no make file created for running this script

For running the code, follow the following steps:

Step 1: g++ test.cpp -o testOut 
- Above code uses the g++ compiler to compile and link the test.cpp file into an executable named testOut.
- The -o option specifies the output file name (in this case, testOut), and the program is ready to be executed after successful compilation and linking.

2. ./testOut
- Above command is used to run the testOut executable that was compiled in Step 1 using g++.
-This should output the statement: "Hello, GitHub Codespaces, C++ Environment looks to be all set!"


Alternatively, instead of running steps 1 and 2 separately, you could also create a 'Makefile' with the following information and execute it with a simple command 'make':

//////////Makefile////////////////
# Compiler and output file
CXX = g++
OUT = testOut
SRC = test.cpp

# Default target: compile and run
all: $(OUT)
	./$(OUT)

# Compile the C++ program
$(OUT): $(SRC)
	$(CXX) $(SRC) -o $(OUT)

# Clean up generated files
clean:
	rm -f $(OUT)

//////////Makefile////////////////
