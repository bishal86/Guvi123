#include<stdio.h>
void fact(int n)
{
	int i,f=1;
        if(n<0)
   	printf("No factorial");
   	else if(n==0)
   	printf("factorial is 0");
   	else
   	{
   	 for(i=1;i<=n;i++)
   	 f=f*i;
         printf("Factorial of %d is %d",n,f);
  }
}
int main()
{
      int n;
      printf("Enter a number: ");
      scanf("%d",&n);
      fact(n);
      return 0;
}
