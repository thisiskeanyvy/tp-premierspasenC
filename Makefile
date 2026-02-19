# TP 2 - Compilation de tous les exercices
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: exercice1 exercice2 exercice3 exercice4_parite exercice4_valeur_absolue exercice5_for exercice5_while

exercice1: test.c
	$(CC) $(CFLAGS) test.c -o test

exercice2: exercice2.c
	$(CC) $(CFLAGS) exercice2.c -o exercice2

exercice3: exercice3.c
	$(CC) $(CFLAGS) exercice3.c -o exercice3

exercice4_parite: exercice4_parite.c
	$(CC) $(CFLAGS) exercice4_parite.c -o exercice4_parite

exercice4_valeur_absolue: exercice4_valeur_absolue.c
	$(CC) $(CFLAGS) exercice4_valeur_absolue.c -o exercice4_valeur_absolue

exercice5_for: exercice5_for.c
	$(CC) $(CFLAGS) exercice5_for.c -o exercice5_for

exercice5_while: exercice5_while.c
	$(CC) $(CFLAGS) exercice5_while.c -o exercice5_while

clean:
	rm -f exercice1 exercice2 exercice3 exercice4_parite exercice4_valeur_absolue exercice5_for exercice5_while

.PHONY: all clean
