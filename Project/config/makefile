all:main
%o:%c
	gcc -c  $< -g -o $@
main:myop.o cfg_op.o test_interface.o
	gcc -g $^ -o $@
clean:
	rm main *.o  ~* -rf 