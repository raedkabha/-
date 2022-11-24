CC=gcc
AR=ar
FLAGS= -Wall -g 
RECURSER= basicClassification.o advancedClassificationRecursion.o
LOOPER= basicClassification.o advancedClassificationLoop.o
ALL= mainsrec mainsloop maindloop maindrec

#Objects

basicClassification.o: basicClassification.c NumClass.h
$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
$(CC) $(FLAGS) -c advancedClassificationLoop.c  

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
$(CC) $(FLAGS) -c advancedClassificationRecursion.c

main.o: main.c NumClass.h
$(CC) $(FLAGS) -c main.c 

# Dyamic LIBS

libclassrec.so: $(RECURSER)
$(CC) -shared -o libclassrec.so $(RECURSER)

libclassloops.so: $(LOOPER)
$(CC) -shared -o libclassloops.so  $(LOOPER)

# Static LIBS

libclassloops.a: $(LOOPER)
$(AR) -rcs libclassloops.a $(LOOPER)

libclassrec.a: $(RECURSER)
$(AR) -rcs  libclassrec.a $(RECURSER)

#Targets

all: $(ALL)

loops: libclassloops.a

recursives: libclassrec.a 

recursived: libclassrec.so 

loopd: libclassloops.so

mainsrec: main.o libclassrec.a
$(CC) $(FLAGS) -o mainsrec main.o libclassrec.a -lm

mainsloop: main.o libclassloops.a
$(CC) $(FLAGS) -o mainsloop main.o libclassloops.a -lm

maindloop: main.o libclassloops.so
$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm 

maindrec: main.o libclassrec.so
$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm 

PHONY: clean 
rm -f *.o *.a *.so $(ALL)


