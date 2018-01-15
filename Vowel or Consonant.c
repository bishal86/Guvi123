#include<stdio.h>
void check(char c)
{
	if (c=="a"||c=="e"||c=="i"||c=="o"||c=="u"||c=="A"||c=="E"||c=="I"||c=="O"||c=="U")
	printf("Character is Vowel");
	else
	printf("Character is Consonant");
}

int main()
{
	char c;
	printf("Enter Character");
	scanf("%c",&c);
	check(c);
	return 0;
}
