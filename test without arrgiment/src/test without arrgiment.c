/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main() {
	int k;
	k=sum();
	printf("result is %d",k);

	return 0;


	return EXIT_SUCCESS;
}
int sum()
{
int a,b,poda;
setbuf(stdout,NULL);
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
poda=a+b;
 return poda;
}
