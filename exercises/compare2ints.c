/****************************************
*compare2ints.c							*
*a simple program to comapre 2 integers	*
*Author: opendwio						*
*Date: 17.06.18							*
*****************************************/
#include <stdio.h>
int equals(int a, int b){
	if (a == b) return 1; else return 0;
}
int main() {
	int x, y;
	printf("Input 2 numbers\n");
	scanf("%i%i", &x,&y);
	int result = equals(x,y);
	printf("%i and %i are ", x,y);
	if(result==1) printf ("equal\n"); else printf ("not equal\n");
	return 0;
}