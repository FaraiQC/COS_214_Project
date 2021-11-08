main: *.cpp *.h
	g++ -g -std=c++0x *.cpp *.h -o main

run:
	./main

clean:
	-rm -f *.o *.out *.tgz main

tar: 
	tar -cvz *cpp *h *.png makefile -f U19116498_PA2.tgz