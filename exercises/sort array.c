/****************************************************************
*sort array.c													*
*sorting an array of 5 elements from smallest to biggest		*
*Author: opendwio												*
*Date: 16.06.18													*
*****************************************************************/
#include <stdio.h>
#include <conio.h>
void calculate(){
	int  intarray[5];
	for (int i = 0; i<5; i++){
		printf("Input %i. value\n", i+1);
		scanf("%i",&intarray[i]);
		}
	printf("\n");
	for (int i = 0; i<5; i++){
		for (int j = i+1; j<5;j++){
			if(intarray[i]>intarray[j]){
				int temp = intarray[i];
				intarray[i] = intarray[j];
				intarray[j] = temp;
			}
		}
	}
		for (int i = 0; i <5; i++){
			printf("%i\n",intarray[i]);
		}
	printf("press ESC to quit or any other key to continue using the program\n");
	
}
int main() {
	int quit;
	do {calculate(); quit = _getch();} while (quit!=27);
	return 0;
}