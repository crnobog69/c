# Pronalaženje svih C fajlova, izuzimajući windows fasciklu
SOURCES := $(shell find prviSemestar-2024 -path "*/windows" -prune -o -name "*.c" -print)

# Debug - štampaj pronađene fajlove
$(info Sources: $(SOURCES))

# Izvršni fajlovi će imati isto ime kao i .c fajlovi
EXECUTABLES := $(SOURCES:.c=)

# Kompajler i zastavice
CC = gcc
CFLAGS = -Wall -Wextra -g -lm

# Podrazumevana meta - kompajlira sve
all: $(EXECUTABLES)

# Pravilo za pravljenje svakog pojedinačnog executable-a
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Čišćenje svih generisanih executable-a
clean:
	find . -type f -name "*.o" -exec rm -f {} +

.PHONY: all clean