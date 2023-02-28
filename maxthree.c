// C Program To Find Maximum Of Three Numbers Using If-else

#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("Enter The First Number : ");
	scanf("%d", &num1);
	printf("Enter The Second Number : ");
	scanf("%d", &num2);
	printf("Enter The Three Number : ");
	scanf("%d", &num3);
	if (num1 > num2 && num1 > num3){
		printf("%d Is Greater", num1);
	}
	else if (num2 > num1 && num2 > num3){
		printf("%d Is Greater", num2);
	}
	else{
		printf("%d Is Greater", num3);
	}
}