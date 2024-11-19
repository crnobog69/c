TARGET = zadatak101

SRC = zadatak101.c

CC = gcc

CFLAGS = -Wall

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
