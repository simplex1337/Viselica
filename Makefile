lul.a: main.o strings.o
	gcc -o lul ./obj/main.o ./obj/risunok.o  -lncurses

main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

strings.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o