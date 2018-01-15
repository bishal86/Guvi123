#include<stdio.h>
int main()
{
  int n,count=0;
  printf("Enter the integer");
  scanf("%d",&n);
  while(n!=0)
  {
  	n=n/10;
  	count=count+1;
  }
  printf("No of digits is %d",count);
  
}
