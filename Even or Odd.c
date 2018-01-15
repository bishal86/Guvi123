#include<stdio.h>
void check(int c)
{
	if (c%2==0)
	printf("Number is Even");
	else
	printf("Number is Odd");
}

int main()
{
	int c;
	printf("Enter Number");
	scanf("%d",&c);
	check(c);
	return 0;
}
