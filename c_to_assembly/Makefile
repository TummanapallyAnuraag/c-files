all: assembly object executable

assembly:
	# sudo apt install gcc-multilib
	gcc -m32 -masm=intel -S main.c -o main.s

object: assembly
	gcc -m32 -masm=intel -c main.s -o main.o
	# readelf -a main.o

executable: object
	gcc -m32 main.o -o main
	chmod +x main
	./main

clean: main.o main.s main
	# $^ means all the prerequisites
	# $< is the 1st prerequisite
	# $@ is the name of target (clean)
	rm $^

help: 
	@echo "usage: make all"
	
