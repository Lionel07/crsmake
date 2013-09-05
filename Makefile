COMPILING_FILES := $(wildcard *.cpp)

all: build run
  
build:
	cpp ${COMPILING_FILES} -o crsmake
run:
	chmod +x crsmake
	./crsmake
