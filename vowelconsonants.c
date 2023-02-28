// C Program To Check Whether Given Character Is Vowel Or Consonant Using If-else

#include <stdio.h>
#include <ctype.h>

void main(){
	char ch;
	printf("Enter Your Character : ");
	scanf("%c", &ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("%c Is A Vowel", ch);
    }
    else if (isalpha(ch) == 0){
    	printf("%c Is Not An Alphabet", ch);
    } 
    else{
    	printf("%c Is A Consonant", ch);
    }
}