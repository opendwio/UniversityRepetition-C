/********************************
*calculator.c					*
*simple calculator				*
*Author: opendwio				*
*Date: 16.06.18					*
*********************************/
#include <stdio.h>
#include <conio.h>
void calculate(){
	char operation;
	int number1, number2,result;
	printf("Put in a number an operation and another number (Example: '2+3')\n");
	scanf("%i%c%i", &number1,&operation, &number2);
	switch (operation) {
		case '+':result = number1+number2; break;
		case '-':result = number1-number2; break;
		case '*':result = number1*number2; break;
		case '/':result = number1/number2; break;
	}
	printf("%i %c %i = %i\n\n",number1, operation, number2, result);
	printf("press ESC to quit or any other key to continue calculating\n");
	
}
int main() {
	int quit;
	do {calculate(); quit = _getch();} while (quit!=27);
	return 0;
}