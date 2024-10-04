/*
2. Write a C program that takes an integer input from the user and prints all even
numbers from 1 to that integer using a while loop.
Requirements:
? Use a while loop.
? Validate that the input is greater than or equal to 1.
? Print all even numbers between 1 and the input number.
*/

#include<stdio.h>
int main(){
	int inp;
	
	printf("Enter a number plz: ");
	scanf("%d", &inp);
	
	if(inp >= 1){
		while (inp > 0){
			if(inp % 2 != 0){
				inp--;
			}
			printf("%d \n", inp);
			inp = inp - 2;
		}
	}
	return 0;
}