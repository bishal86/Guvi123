#include<stdio.h>
void check(char c)
{
	if( (c>=65 && c<=90) || (c>=97 && c<=122))
	printf("Alphabet");
	else
	printf("Not");
}

int main()
{
	char c;
	printf("Enter Character");
	scanf("%c",&c);
	check(c);
	return 0;
}
