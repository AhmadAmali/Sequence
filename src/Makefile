
assignment3: main.o lts.o lcs.o lps.o utility.o
	gcc -Wall -std=c99 main.o lts.o lcs.o lps.o utility.o -o assignment3

main.o: main.c main.h
	gcc -Wall -std=c99 -c main.c

lps.o: lps.c lps.h
	gcc -Wall -std=c99 -c lps.c

lts.o: lts.c lts.h
	gcc -Wall -std=c99 -c lts.c

lcs.o: lcs.c lcs.h
	gcc -Wall -std=c99 -c lcs.c

utility.o: utility.c utility.h
	gcc -Wall -std=c99 -c utility.c

run:
	time ./assignment3 -c

clean:
	rm -f *.out *.o