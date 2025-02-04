# Compiler and Linker
CXX = g++
CXXFLAGS = -std=c++11 -I/usr/include/opencv4  # Include OpenCV headers
LDFLAGS = -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_objdetect -lopencv_videoio -lopencv_imgcodecs  # Link OpenCV libraries

# Source File(s)
SRC = faceDetection.cpp

# Output Executable
OUT = faceDetection_out

# Default target: compile and run the program
all: $(OUT)
	./$(OUT)

# Build the program
$(OUT): $(SRC)
	$(CXX) $(SRC) -o $(OUT) $(CXXFLAGS) $(LDFLAGS)

# Clean up generated files
clean:
	rm -f $(OUT)

