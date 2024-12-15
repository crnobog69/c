# Makefile za testiranje C projekta sa matematičkom bibliotekom

# Pronalaženje svih C fajlova, osim onih u Windows direktorijumu
SOURCES := $(shell find prviSemestar-2024 -path "*/windows" -prune -o -name "*.c" -print)
TEST_SOURCES := $(shell find prviSemestar-2024 -path "*/windows" -prune -o -name "*test*.c" -print)

# Objektni fajlovi
OBJECTS := $(SOURCES:.c=.o)
TEST_OBJECTS := $(TEST_SOURCES:.c=.o)

# Kompajler i zastavice
CC = gcc
CFLAGS = -Wall -Wextra -g
TEST_LIBS = -lcunit -lm  # -lm za matematičku biblioteku

# Ime izvršnog programa za testove
TEST_EXECUTABLE = run_tests

# Podrazumevana meta
all: test

# Meta za kompajliranje svih objektnih fajlova
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Meta za pokretanje testova
test: $(TEST_EXECUTABLE)
	./$(TEST_EXECUTABLE)

# Pravljenje test izvršnog programa
$(TEST_EXECUTABLE): $(TEST_OBJECTS) $(filter-out *test*.o, $(OBJECTS))
	$(CC) $(CFLAGS) -o $@ $^ $(TEST_LIBS)

# Čišćenje generisanih fajlova
clean:
	find prviSemestar-2024 -name "*.o" -delete
	rm -f $(TEST_EXECUTABLE)

# Pokreni testove bez zaustavljanja
test-all: $(TEST_EXECUTABLE)
	./$(TEST_EXECUTABLE) || true

.PHONY: all test clean test-all