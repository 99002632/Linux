target:all out clean
all:bitmask.o mystr.o myutils.o test.o
	gcc bitmask.c mystr.c myutils.c test.c -o all.out
bitmask.o:
	gcc -c bitmask.c
mystr.o:
	gcc -c mystr.c
myutils.o:
	gcc -c myutils.c
test.o:
	gcc -c test.c
clean:
	rm -rf *.o *.out
out:
	./all.out
