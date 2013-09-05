COMPILING_FILES := $(wildcard *.cpp)

all: build run
  
build:
	cxx ${COMPILING_FILES} -o crsmake
run:
	./crsmake
