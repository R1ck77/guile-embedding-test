.PHONY: clean all run test

CFLAGS=`pkg-config --cflags guile-2.2`
LDFLAGS=`pkg-config --libs guile-2.2`

run: all
	GUILE_LOAD_PATH=$GUILE_LOAD_PATH:. LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./embedding-test

all: embedding-test

embedding-test: embedding-test.o
	gcc $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f *.o embedding-test 
