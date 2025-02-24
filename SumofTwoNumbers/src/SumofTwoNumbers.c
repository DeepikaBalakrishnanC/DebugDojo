/*
 ============================================================================
 Name        : SumofTwoNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,Sum;
	setbuf(stdout,NULL);
	printf("Enter the numbers : ");
	scanf("%d %d",&num1,&num2);
	Sum = num1 + num2;
	printf("The Sum is : %d",Sum);
	return 0;
}
