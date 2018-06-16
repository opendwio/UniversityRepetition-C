/************************
*multiplication table.c	*
*multiplication table	*
*Author: opendwio		*
*Date: 16.06.18			*
*************************/
#include <stdio.h>
int main() {
	for(int i = 1; i<11;i++){
		for(int j = 1; j<11; j++){
			printf("%i * %i = %i\t", i,j, (i*j));}
			printf("\n");
		}
	return 0;
}