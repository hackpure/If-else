// C Program To Check Whether Given Number Is Even Or Odd Using If-else

#include <stdio.h>

void main(){
	int num1;
	printf("Enter The Number : ");
	scanf("%d", &num1);
	if (num1 % 2 == 0){
		printf("%d Is Even", num1);
	}
	else{
		printf("%d Is Odd", num1);
	}
}