/*
3. Write a C program that keeps asking the user to input a positive number. The loop
should stop once the user inputs a valid number using a do-while loop.
Requirements:
? Use a do-while loop.
? Validate the input so it only stops for a positive number.
? Display the final accepted input.
*/

#include<stdio.h>
int main(){
	int num;
	
	printf("Enter num: ");
	scanf("%d", &num);
	
	while (num < 0){
		printf("no \n");
		printf("Enter num: ");
		scanf("%d", &num);
	}
	printf("Hell yeah ~<_%d_>~", num);
	
	return 0;
}