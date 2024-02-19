all:
	flex scanner.l
	bison -d -v parser.y
	gcc -o codegen lex.yy.c parser.tab.c sym_table.c -lm

clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h codegen parser.output assembly Blink.s