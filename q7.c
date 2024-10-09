/*
7. Write a program to check whether a number is an Armstrong number or not. An
Armstrong number is a number that is equal to the sum of cubes of its digits.
*/
#include<stdio.h>
void main(){
	int input, original,remainder,result = 0;
	printf("Enter the your number: ");
	scanf("%d", &input);
	
	original = input;
	
	while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    
    if (result == input){
		printf("This is an Armstrong number");
	}else{
		printf("This is NOT an Armstrong number");
	}
}
