hangman: ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/input.o ./obj/asteriks.o ./obj/themes.o
	gcc -o hangman ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/asteriks.o ./obj/input.o ./obj/themes.o -lncursesw

hangman_dbg: 
	gcc -g -o hangman_debug ./src/main.c ./src/risunok.c ./src/random.c ./src/asteriks.c ./src/input.c -lncursesw

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

./obj/risunok.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o
	
./obj/random.o: ./src/random.c
	gcc -c ./src/random.c -o ./obj/random.o
	
./obj/input.o: ./src/input.c
	gcc -c ./src/input.c -o ./obj/input.o

./obj/asteriks.o: ./src/asteriks.c
	gcc -c ./src/asteriks.c -o ./obj/asteriks.o

./obj/themes.o: ./src/themes.c
	gcc -c ./src/themes.c -o ./obj/themes.o
