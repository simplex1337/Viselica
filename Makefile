lul: ./obj/main.o ./obj/risunok.o
	gcc -o lul ./obj/main.o ./obj/risunok.o  -lncursesw

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

./obj/risunok.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o