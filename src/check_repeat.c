/*****************************************************
* Тимлид: "Делай так, будто это отдельная программа" *     
* Я: "Ок".                                           *
*****************************************************/

#include <stdio.h>

/******************************************************
* Символ, подаваемый на вход программы пользователем: *
******************************************************/
char symbol;

/****************************************************************
*         Символьный массив, хранящий символы, которые:         *
*                                                               *
* а) являются буквами латинского алфавита;                      *
* б) были введены пользователем более одного раза за одну игру; *
* в) не повторяются в нем.                                      *
*                                                               *
*              Оптимальная длина массива в 26 ячеек             * 
*            обоснована длиной английского алфавита.            *
****************************************************************/
char alphabet[26]; 

/*****************************************************
 *                Описание функции,                  * 
 *        которая осуществляет инициализацию         *
 *                 данного массива:                  *
 *                                                   *
 *        Каждой ячейке массива присваивается        *
 *   числовое значение символа '0' в ASCII - коде.   *
 *                                                   *
 *      Возможен выбор другого символа, который      *
 * не используется приложением в качестве букв слов. *
 ****************************************************/     

alphabet_init() {
	int i;
	for	(i=0; i<26; i++) {
		alphabet[i]='0';
	}
	alphabet[26] = '\0';			  
}

/**********************************************
 *             Описание функции,              * 
 *        которая осуществляет проверку       *
 *  на повторный ввод символа пользователем.  *
 *********************************************/         

int check_repeat(char symbol) {
	int i;
	for(i=0; i<26; i++)
	{
		if (symbol == alphabet[i] &&((symbol >= 'a') && (symbol <='z'))){
			printf("You already inputted this letter. Please try a new one:");
			return  1;
		}
		if (alphabet[i] == '0' &&((symbol >= 'a') && (symbol <='z'))){
			alphabet[i] = symbol;
			return 0;
		}	
	}
}

void case_1() {
	alphabet_init();	
	printf("Case number one \n");
	printf("Input any letter:");	
	scanf("%c", &symbol);
	while (check_repeat(symbol)!=0) {
		scanf("%c", &symbol);
	};
}

void case_2() {
	alphabet_init();
	int i;
	for	(i=0; i<25; i++) {
	alphabet[i]='a'+i;
	}
	printf("Case number two \n");
	printf("Repeat any letter");	
	scanf("%c", &symbol);
	while (check_repeat(symbol)!=0) {
		printf("Input 'z' to stop loop:");
		scanf("%c", &symbol);
	};	
}

void case_3() {
	alphabet_init();
	int i;
	for	(i=0; i<1; i++) {
		alphabet[i]='a';
	}
printf("Case number three \n");
printf(" Input a letter 'a':");	
scanf("%c", &symbol);
while (check_repeat(symbol)!=0) {
		scanf("%c", &symbol);
	};
}

void case_4() {
alphabet_init();
printf("Case number four \n");
printf(" Input a letter 'a':");	
scanf("%c", &symbol);

while (check_repeat(symbol)!=0) {
		scanf("%c", &symbol);
	};

printf(" Input a letter 'a' again:");	
scanf("%c", &symbol);

while (check_repeat(symbol)!=0) {
		scanf("%c", &symbol);
	};
}

int main() {

/******************************
* Общий вид  главной функции: *
* alphabet_init();            *
* for(??;??;??) {             *
* scanf("%c", &symbol);       * 
* while(check_repeat!=0) {    *
* 	scanf("%c", &symbol);     *
* }                           *
******************************/
	

/* Результат работы функции, когда символ был введен в первый раз: */

case_1();


/* Результат работы функции, когда символ от 'a' до 'y' был введен повторно: */

case_2();/* (работает с некоторыми косяками, дорабатывается)*/ 

/* Результат работы функции, когда символ 'a' был введен повторно: */

case_3();

/* Результат работы функции, когда символ 'а' был последовательно введен 2 раза: */

case_4();

return 0;

}

