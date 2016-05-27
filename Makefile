.PHONY: all
all: dirs ./bin/hangman

.PHONY: test
test: dirs ./bin/hangman_test
	@mkdir -p obj

.PHONY: rel
rel: dirs ./bin/hangman

.PHONY: dbg
rel: dirs ./bin/hangman_dbg

.PHONY: dirs
dirs:
	@mkdir -p obj
	@mkdir -p bin
	@cp ./data/dic.txt ./bin/
	
.PHONY: clean
clean:
	@rm -r obj
	@rm -r bin

./bin/hangman: ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/input.o ./obj/asteriks.o
	gcc -o ./bin/hangman ./obj/main.o ./obj/risunok.o ./obj/random.o ./obj/asteriks.o ./obj/input.o -lncursesw

./bin/hangman_test: ./obj/main_test.o ./obj/ctest.o ./obj/random.o ./obj/asteriks.o
	gcc -o ./bin/hangman_test ./obj/main_test.o ./obj/random.o ./obj/ctest.o ./obj/asteriks.o

./bin/hangman_dbg: 
	gcc -g -o ./bin/hangman_debug ./src/main.c ./src/risunok.c ./src/random.c ./src/asteriks.c ./src/input.c -lncursesw

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o
	
./obj/main_test.o: ./test/main.c
	gcc -c ./test/main.c -o ./obj/main_test.o

./obj/ctest.o: ./test/ctest.c
	gcc -c ./test/ctest.c -o ./obj/ctest.o

./obj/risunok.o: ./src/risunok.c
	gcc -c ./src/risunok.c -o ./obj/risunok.o
	
./obj/random.o: ./src/random.c
	gcc -c ./src/random.c -o ./obj/random.o
	
./obj/input.o: ./src/input.c
	gcc -c ./src/input.c -o ./obj/input.o

./obj/asteriks.o: ./src/asteriks.c
	gcc -c ./src/asteriks.c -o ./obj/asteriks.o

