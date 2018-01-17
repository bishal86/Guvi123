#include<stdio.h>
void rev(char s[])
{
	int i,j,temp;
	i=0;
	j=i+1;
	while(i!='\0')
	{
	
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	i++;
	i++;
	j++;
	j++;
}
printf("%s",s);
	
}
int main()
{
      char s[20];
      printf("Enter a number: ");
      scanf("%s",s);
      rev(s);
      return 0;
}

