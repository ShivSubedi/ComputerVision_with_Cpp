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