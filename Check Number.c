#include<stdio.h>
void check(int c)
{
	if(c>0)
	printf("Number is positive");
	
	else if(c<0)
	printf("Number is negative");
	
	else
	printf("Number is Zero");
}

int main()
{
	int c;
	printf("Enter Number");
	scanf("%d",&c);
	check(c);
	return 0;
}
