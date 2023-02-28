// C Program To Find Maximum Of Two Numbers Using If-else

#include <stdio.h>

void main(){
	int num1, num2;
	printf("Enter The First Number : ");
	scanf("%d", &num1);
	printf("Enter The Second Number : ");
	scanf("%d", &num2);
	if (num1 > num2){
		printf("%d Is Greater", num1);
	}
	else{
		printf("%d Is Greater", num2);
	}
}