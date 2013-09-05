COMPILING_FILES := main.cpp
all: build run
  
build:
	clang++ main.cpp -o crsmake
run:
	./crsmake
