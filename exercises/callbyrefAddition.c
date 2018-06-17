/************************************************************
*callbyrefAddition.c										*
*a simple program to add 2 numbers using Call by Reference	*
*Author: opendwio											*
*Date: 17.06.18												*
*************************************************************/
#include <stdio.h>
void add(int a, int b, int *c){
	*c =a +b;
}
int main() {
	int x, y;
	int *c;
	printf("Input 2 numbers\n");
	scanf("%i%i", &x,&y);
	add(x,y,c);
	printf("%i + %i = %i\n", x,y,*c);
	
	return 0;
}