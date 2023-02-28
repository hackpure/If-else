// C Program To Check Whether Given Year Is Leap Year Or Not Using If-else

#include <stdio.h>

void main(){
	int year;
	printf("Enter The Year : ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		printf("%d Is A Leap Year", year);
	}
	else{
		printf("%d Is Not A Leap Year", year);
	}
}