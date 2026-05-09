CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = games/guess_the_number
SRC = games/guess_the_number.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe
