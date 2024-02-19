all:
	rm -f *.c *.exe
	flex scanner.l
	gcc lex.yy.c -o scanner