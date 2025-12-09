compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.h tablaDeSimbolos.o tablaDeSimbolos.h listaId.o listaId.h tablaDeCuadruplas.o tablaDeCuadruplas.h listaEnteros.o listaEnteros.h
	gcc parser.tab.c lex.yy.o literal.o tablaDeSimbolos.o listaId.o tablaDeCuadruplas.o listaEnteros.o
	mv a.out compilador

parser.tab.c parser.tah.h: parser.y literal.h nombresDeTipos.h tablaDeSimbolos.h listaId.h tablaDeCuadruplas.h listaEnteros.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h tablaDeSimbolos.h listaId.h tablaDeCuadruplas.h listaEnteros.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

tablaDeSimbolos.o: tablaDeSimbolos.c
	gcc -c tablaDeSimbolos.c

listaId.o: listaId.c
	gcc -c listaId.c

tablaDeCuadruplas.o: tablaDeCuadruplas.c
	gcc -c tablaDeCuadruplas.c

listaEnteros.o: listaEnteros.c
	gcc -c listaEnteros.c

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm *.tab.* lex.yy.c *.o
