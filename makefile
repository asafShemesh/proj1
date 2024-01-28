

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so


mains: main.o libclassrec.a 
	gcc -g -Wall -o mains main.o libclassrec.a 

maindloop: main.o libclassloops.so
	gcc -g -Wall -o mains  main.o ./libclassloops.so

maindrec: main.o libclassrec.so
	gcc -g -Wall -o maindrec main.o ./libclassrec.so

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -g -Wall -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -g -Wall -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o


# compile c files
main.o: main.c NumClass.h
	gcc -g -Wall -c main.c

basicClassification.o: basicClassification.c NumClass.h
	gcc -g -Wall -fPIC -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -g -Wall -fPIC -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -g -Wall -fPIC -c advancedClassificationRecursion.c
	

.PHONY: all clean
clean:
	rm -f *.o *.a *.so mains maindloop maindrec

