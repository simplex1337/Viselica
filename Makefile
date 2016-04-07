lul.a: main.o strings.o
	gcc -o ./bin/lul ./obj/main.o ./obj/strings.o

main.o: main.c
	gcc -c ./src/main.c -o ./obj/main.o

strings.o: strings.c
	gcc -c ./src/strings.c -o ./obj/strings.o