hangman: ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/input.o ./obj/asteriks.o ./obj/jizi.o ./obj/risunok1.o
	gcc -o hangman ./obj/main.o ./obj/risunok.o ./obj/jizi.o ./obj/random.o ./obj/risunok1.o ./obj/asteriks.o ./obj/input.o -lncursesw

hangman_dbg: 
	gcc -g -o hangman_debug ./src/main.c ./src/risunok.c ./src/random.c  src/asteriks.c ./src/risunok1.c ./src/input.c -lncursesw

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

./obj/risunok.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o
	
./obj/risunok1.o: ./src/risunok1.c
	gcc -c ./src/risunok1.c -o ./obj/risunok1.o
	
./obj/jizi.o: ./src/jizi.c
	gcc -c ./src/jizi.c -o ./obj/jizi.o
	
./obj/random.o: ./src/random.c
	gcc -c ./src/random.c -o ./obj/random.o
	
./obj/input.o: ./src/input.c
	gcc -c ./src/input.c -o ./obj/input.o

./obj/asteriks.o: ./src/asteriks.c
	gcc -c ./src/asteriks.c -o ./obj/asteriks.o
