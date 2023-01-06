build: grammar.js src/parser.c
	tree-sitter generate
	$(CC) -fPIC -c src/parser.c -o parser.o $(CFLAGS)
	$(CC) -shared -o parser/http.so *.o

test:
	tree-sitter test
