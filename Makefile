COMPILING_FILES := main.cpp
all: build
  
build:
	clang++ main.cpp tokenizer.cpp -o crsmake
