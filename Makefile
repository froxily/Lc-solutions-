# Makefile for C++ LeetCode Solutions
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Default target
.PHONY: help
help:
	@echo "Available commands:"
	@echo "  make compile FILE=path/to/file.cpp  - Compile a specific C++ file"
	@echo "  make run FILE=path/to/file.cpp      - Compile and run a specific C++ file"
	@echo "  make clean                          - Remove all compiled executables"
	@echo ""
	@echo "Examples:"
	@echo "  make compile FILE=cpp/arrays/two_sum.cpp"
	@echo "  make run FILE=cpp/arrays/two_sum.cpp"

# Compile a specific file
.PHONY: compile
compile:
ifndef FILE
	$(error FILE is not set. Usage: make compile FILE=path/to/file.cpp)
endif
	$(CXX) $(CXXFLAGS) $(FILE) -o $(basename $(FILE))

# Compile and run a specific file
.PHONY: run
run: compile
ifndef FILE
	$(error FILE is not set. Usage: make run FILE=path/to/file.cpp)
endif
	./$(basename $(FILE))

# Clean compiled files
.PHONY: clean
clean:
	find . -name "*.out" -type f -delete
	find ./cpp -type f -executable ! -name "*.cpp" ! -name "*.h" ! -name "*.hpp" -delete