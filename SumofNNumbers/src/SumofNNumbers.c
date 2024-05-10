/*
 ============================================================================
 Name        : SumofNNumbers.c
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
	int number,i,sum=i;
	printf("Entre a number");
	scanf("%d",&number);
	for(i=1;1<number;i++){
		sum=sum+i;
    }
	printf("result=%d",sum);

	return EXIT_SUCCESS;
}
