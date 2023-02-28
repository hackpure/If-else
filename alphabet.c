// C Program To Check Whether Given Character Is Alphabet Or Not Using If-else

#include <stdio.h>
#include <ctype.h>

void main(){
	char c;
	printf("Enter Your Character : ");
	scanf("%c", &c);
	if (isalpha(c) == 0){
		printf("%c Is Not An Alphabet", c);
	}
	else{
		printf("%c Is An Alphabet", c);
	}
}