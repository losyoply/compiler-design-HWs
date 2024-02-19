parser: lex.yy.c parser.tab.c
	gcc -o parser lex.yy.c parser.tab.c
parser.tab.c: parser.y
	bison -d -v parser.y
lex.yy.c: scanner.l
	flex scanner.l
