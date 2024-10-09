/*
4. Which loop would be better for User Input? Justify your answer by creating a program
that takes a value and adds it to a variable and prints it repeatedly until the user enters
a zero value.
*/
#include<stdio.h>
int main(){
	
	int value, sum =0, flag =0;
	while(flag == 0){
		printf("Enter a Value: ");
		scanf("%d",&value);
		sum += value;
		if(value != 0){
			printf("%d \n", sum);
		}else{
			flag = 1;
		}
	}
	return 0;
	
}
