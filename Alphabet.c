#include<stdio.h>
void check(char c)
{
	if( (c>=65 && c<=90) || (c>=97 && c<=122))
	printf("Character is Alphabet");
	else
	printf("Character is not an Alphabet");
}

int main()
{
	char c;
	printf("Enter Character");
	scanf("%c",&c);
	check(c);
	return 0;
}
