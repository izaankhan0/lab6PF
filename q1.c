/*
1. Factorial is the product of all positive integers less than or equal to the number. Write
a C program that calculates the factorial of a number using a for loop.
Requirements:
? Use a for loop to calculate the factorial.
? Ensure the input is a positive integer.
*/

#include<stdio.h>

int main(){
	int inp, fact = 1;
	printf("Enter num: ");
	scanf("%d", &inp);
	if(inp > 0){
		for(int i = inp; i > 0; i--){
			fact = fact * i;
		}
		printf("factorial of %d is %d", inp, fact);
	} else{
		printf("Enter a positive integer:");
	}
}