#include<stdio.h>
#include<string.h>
void append(char s[])
{
  int x=strlen(s);
  s[x]='.';
  s[x+1]='\0';
  printf("%s",s);
}
int main()
{
      char s[20];
      printf("Enter a number: ");
      scanf("%s",s);
      append(s);
      return 0;
}

