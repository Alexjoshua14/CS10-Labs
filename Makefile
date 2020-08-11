#
# Makefile for cs10-Labs
#

compile=gcc -o

alpha:
	$(compile) alphabetize alphabetize.c
box:
	$(compile) box box.c
min:
	$(compile) min min.c
match:
	$(compile) match match.c
prime:
	$(compile) prime prime.c
primepointers:
	$(compile) primepointers primepointers.c
reverse:
	$(compile) reverse reverse.c
queens:
	$(compile) queens queens.c
all: alpha match prime queens

clean:
	rm -f alphabetize
	rm -f box
	rm -f min
	rm -f match
	rm -f prime
	rm -f primepointers
	rm -f reverse
	rm -f queens
