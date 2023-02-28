// C Program To Check Whether Given Number Is Negative Positive Or Zero Using If-else

#include <stdio.h>

void main(){
	int num1;
	printf("Enter Your Number : ");
	scanf("%d", &num1);
	if (num1 > 0){
		printf("%d Is Positive", num1);
	}
	else if (num1 < 0){
		printf("%d Is Negative", num1);
	}
	else{
		printf("%d Is Zero", num1);
	}
}