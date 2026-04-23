test:
	g++ test.cpp -o test.out \
	-lgtest -lgtest_main -pthread \
	-lmylib -L. \
	-Wl,-rpath=.

lib:
	g++ -fPIC -c lib.cpp
	g++ -shared -o libmylib.so lib.o

main:
	g++ main.cpp -lmylib -L. -Wl,-rpath=.