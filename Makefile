# Define the compiler
CC=gcc
#CC=g++

# Define any compile-time flags
CFLAGS=-I./include

# Define any directories containing libraries
LFLAGS=-L./dll/linux_64/

# Define any libraries to link into executable
#LIBS=-lMagicCrypto -ljson-c -lcurl -lcrypto

# Define the source file for the build
SRC=./main.c
#SRC=tester/tester.c

# Define the output target
TARGET=./main
#TARGET=tester/tester

# The first rule (all) is the one executed when no parameters are given to make
all: $(TARGET)

# Rule for building the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -g $(LFLAGS) $(LIBS)

# Rule for cleaning up
clean:
	rm -f $(TARGET)
