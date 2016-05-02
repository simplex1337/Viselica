hangman: ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/input.o
	gcc -o hangman ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/input.o -lncursesw

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

./obj/risunok.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o
	
./obj/random.o: ./src/random.c
	gcc -c ./src/random.c -o ./obj/random.o
	
./obj/input.o: ./src/input.c
	gcc -c ./src/input.c -o ./obj/input.o
