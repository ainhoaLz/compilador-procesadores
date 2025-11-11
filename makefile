compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.h
	gcc parser.tab.c lex.yy.o literal.o
	mv a.out compilador

parser.tab.c parser.tah.h: parser.y literal.h nombresDeTipos.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm *.tab.* lex.yy.c *.o
