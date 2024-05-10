/*
 ============================================================================
 Name        : switch.c
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
	int choice;
	printf("1 for porotta /n2 for Biriyani /n3 for Fride rice /n4 for Mandhi");
    scanf("%d",&choice);
    switch(choice){
case 1:
	printf("you have selected porotta");
	break;
case 2:
    printf("you have selected Biriyani");
    break;
case 3:
    printf("you have selected Fride rice");
    break;
case 4:
    printf("you have selected Mandhi");
    break;
defult:
    printf("mandan");
    }

    return EXIT_SUCCESS;

}
