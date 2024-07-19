# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Ilib

# Source files (all .cpp files in src directory)
SRC = $(wildcard src/*.cpp)

# Executable name
EXEC = ./Build/main

# Default target
all: $(EXEC)

# Link and compile source files to create executable
$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Clean target to remove the executable
clean:
	rm -f $(EXEC)

# Phony targets
.PHONY: all clean
