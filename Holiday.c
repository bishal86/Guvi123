#include<stdio.h>
void holiday(char d)
{
	if(d=="SUNDAY" or d=="sunday")
	printf("YES");
	else
	printf("NO");
	
}
int main()
{
	printf("Enter a day");
	scanf("%d",&d);
	holiday(d);
	return 0;
}
