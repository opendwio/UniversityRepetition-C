/************************
*multiplication table.c	*
*multiplication table	*
*Author: opendwio		*
*Date: 16.06.18			*
*************************/
#include <stdio.h>
#include <conio.h>
void calculate(){
	for(int i = 1; i<11;i++){
		for(int j = 1; j<11; j++){
			printf("%i * %i = %i\t", i,j, (i*j));}
			printf("\n");
		}
	printf("press ESC to quit or any other key to continue calculating\n");
	
}
int main() {
	int quit;
	do {calculate(); quit = _getch();} while (quit!=27);
	return 0;
}