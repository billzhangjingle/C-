all:main

demo12_point.o:demo12_point.cpp demo12_point.h
	g++ -g $< -c -o $@	

demo12_circle.o:demo12_circle.cpp demo12_circle.h
	g++ -g $< -c -o  $@


demo12_main.o:demo12_main.cpp demo12_circle.h demo12_point.h
	g++ -g $< -c -o  $@	
main: demo12_circle.o demo12_point.o demo12_main.o
	g++ -g $^ -o $@
