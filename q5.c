/*
5. Write a program to check whether a given number is prime or not.
*/
#include<stdio.h>
void main(){
	int i, value, flag = 0;
	printf("Enter a number: ");
	scanf("%d", &value);
	for(i = 2; i < value; i++){
		if(value % i == 0){
			flag = 1;
		}
	}
	
	if (flag == 0){
		printf("The number is a PRIME number");
	} else{
		printf("The number is NOT a PRIME number");
	}
	
}
