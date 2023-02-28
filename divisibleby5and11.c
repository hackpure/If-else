// C Program To Check Whether Given Number Is Divisible By 5 and 11 Using If-else

#include <stdio.h>

void main(){
	int num1;
	printf("Enter Your Number To Check : ");
	scanf("%d", &num1);
	if (num1 % 5 == 0 && num1 % 11 == 0){
		printf("%d Is Divisible By Both 5 and 11", num1);
	}
	else if (num1 % 11 == 0){
		printf("%d Is Only Divisible By 11", num1);
	}
	else if (num1 % 5 == 0){
		printf("%d Is Only Divisible By 5", num1);
	}
	else{
		printf("%d Number Is Neither Divisible By 5 Nor By 11", num1);
	}
}