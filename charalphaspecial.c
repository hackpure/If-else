// C Program To Check Whether Given Character Is Alphabet, Digit Or Special Character Using If-else

#include <stdio.h>
#include <ctype.h>

int main(){
	char c;
	printf("Enter Your Character : ");
	scanf("%c", &c);
	if (isalpha(c) != 0){
		printf("%c Is An Alphabet", c);
	}
	else if (isdigit(c) != 0){
		printf("%c Is A Digit", c);
	}
	else{
		printf("%c Is A Special Character", c);
	}
}