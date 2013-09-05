COMPILING_FILES := $(patsubst %.c,%.o,$(wildcard kernel/*.c))

all: build run
  
build:
	cc ${COMPILING_FILES} -o crsmake
run:
	./crsmake
