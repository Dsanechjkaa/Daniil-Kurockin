CC = g++
CFLAGS = -Wall -Wextra -fPIC
LDFLAGS = -shared
TARGET = calculator
LIBNAME = libmathops.so

all: lib $(TARGET)

lib:
	$(CC) $(CFLAGS) -c src/math_operations.cpp -o lib/math_operations.o
	$(CC) $(LDFLAGS) -o lib/$(LIBNAME) lib/math_operations.o

$(TARGET): src/main.cpp
	$(CC) $(CFLAGS) -Iinclude -Llib src/main.cpp -o $(TARGET) -lmathops -Wl,-rpath,'$$ORIGIN/lib'

clean:
	rm -f lib/*.o lib/$(LIBNAME) $(TARGET)

.PHONY: all lib clean