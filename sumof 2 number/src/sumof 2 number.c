/*
 ============================================================================
 Name        : sumof.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,sum;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("Result is : %d",sum);
	return EXIT_SUCCESS;
}
