# Variables
SRC_DIR = src
THIRD_PARTY_DIR = thirdparty
CC = gcc
TARGET = main

# Library names
SHARED_LIB = libadd.so
STATIC_LIB = libsub.a

# Default target
all: $(TARGET)

# Shared library (add.so)
$(SHARED_LIB): $(THIRD_PARTY_DIR)/add.c
	$(CC) -shared -fPIC -o $@ $<

# Static library (sub.a)
$(STATIC_LIB): $(THIRD_PARTY_DIR)/sub.c
	$(CC) -c -o sub.o $<
	ar rcs $@ sub.o

# Main program
$(TARGET): $(SRC_DIR)/main.c $(SHARED_LIB) $(STATIC_LIB)
	$(CC) -o $@ $(SRC_DIR)/main.c -L. -ladd -lsub -Wl,-rpath,.

clean:
	rm -f $(TARGET) *.o $(SHARED_LIB) $(STATIC_LIB)

.PHONY: all clean
