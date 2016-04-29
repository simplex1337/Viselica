lul: ./obj/main.o ./obj/risunok.o ./obj/random.o
	gcc -o lul ./obj/main.o ./obj/risunok.o ./obj/random.o  -lncursesw

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

./obj/risunok.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o
	
./obj/random.o: ./src/random.c
	gcc -c ./src/random.c -o ./obj/random.o
