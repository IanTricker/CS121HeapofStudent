studentHeap: address.o date.o student.o main.o
	g++ -g address.o date.o student.o main.o -o studentHeap

main.o: address.h date.h student.h main.cpp
	g++ -c -g main.cpp

student.o: address.h date.h student.h student.cpp
	g++ -c -g student.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

clean:
	rm *.o
	rm studentHeap

run: studentHeap
	./studentHeap

debug: studentHeap
	gdb studentHeap

val: studentHeap
	valgrind --leak-check=full ./studentHeap
