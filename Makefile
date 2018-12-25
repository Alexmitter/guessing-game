all: guessinggame

WARNINGS = -Wall
DEBUG = -ggdb -fno-omit-frame-pointer
OPTIMIZE = -O2

guessinggame: Makefile guessinggame.c
	$(CC) -o $@ $(WARNINGS) $(DEBUG) $(OPTIMIZE) guessinggame.c

clean:
	rm -f guessinggame

# Builder will call this to install the application before running.
install:
	echo "Installing is not supported"

# Builder uses this target to run your application.
run:
	./guessinggame

