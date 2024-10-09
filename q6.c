/*
Using the above program integrate the number if it is a prime and print the Fibonacci
series till that number.
*/
#include<stdio.h>
void main(){
	int i,j,temp = 1, value, flag = 0, t1 = 0, t2 = 1, nextTerm = 0;
	printf("Enter a number: ");
	scanf("%d", &value);
	for(i = 2; i < value; i++){
		if(value % i == 0){
			flag = 1;
		}
	}
	
	if (flag == 0){
		printf("The number is a PRIME number\n");
	} else{
		printf("The number is NOT a PRIME number\n");
	}
	
	printf("Fabonacci series for %d terms: \n", value);
	 for (j = 1; j <= value; j++) {
            if (j == 1) {
                printf("%d ", t1);
                continue;
            }
            if (j == 2) {
                printf("%d ", t2);
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            printf("%d ", nextTerm);
        }
	
}
