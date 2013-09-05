COMPILING_FILES := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

all: build run
  
build:
	cc ${COMPILING_FILES} -o crsmake
run:
	./crsmake
