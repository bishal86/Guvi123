#include<stdio.h>
#include<string.h>
void even_odd(char s[])
{
	int i,temp;
	for(i=0;i<strlen(s)-1;i=i+2)
	{
	
	temp=s[i];
	s[i]=s[i+1];
	s[i+1]=temp;

}
printf("%s",s);	
	
}
int main()
{
      char s[20];
      printf("Enter a number: ");
      scanf("%s",s);
      even_odd(s);
      return 0;
}
