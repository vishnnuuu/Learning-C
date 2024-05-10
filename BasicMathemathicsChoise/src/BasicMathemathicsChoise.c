/*
 ============================================================================
 Name        : BasicMathemathicsChoise.c
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
	int num1,num2,choice,result;
	printf("Enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	printf("1 for Adition \n2 for subtraction \n3 for Multiplication \n4 for Divition \n Enter your choice");
	scanf("%d",&choice);
	if(choice==1){
		printf("Result=%d",result);
	}else if (choice==2){
		printf("Result=%d",result);
	}else if (choice==3){
		printf("Result=%d",result);
	}else if (choice==4){
		printf("Result=%d",result);
	}else{
    printf("fools!!!");
	}

	return EXIT_SUCCESS;
}
