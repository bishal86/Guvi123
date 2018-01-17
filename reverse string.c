#include<stdio.h>
#include<string.h>
void rev(char s[])
{
	int i=0,j,temp;
	j=strlen(s)-1;
	while(i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	printf("Reverse is %s",s);
	
}
int main()
{
	char s[50];
	printf("Enter a string");
	scanf("%s",s);
	rev(s);
	return 0;
}
