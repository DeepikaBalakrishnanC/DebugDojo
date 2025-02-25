/*
 ============================================================================
 Name        : SizeofIntCharFloat.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	printf("Size of int %u bytes \n", sizeof(int));
	printf("Size of float %u bytes \n", sizeof(float));
	printf("Size of char %u bytes \n", sizeof(char));
	printf("Size of double %u bytes \n", sizeof(double));
	printf("Size of long int %u bytes", sizeof(long int));
	return 0;
}
