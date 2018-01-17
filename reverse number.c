#include<stdio.h>
void rev(int N)
{
	int rem,reverse=0;
	while(N!=0)
	{
	  rem=N%10;
	  reverse=reverse*10+rem;
	  N=N/10;
	  
	}
       printf("%d",reverse);
}
int main()
{
      int N;
      printf("Enter a number: ");
      scanf("%d",&N);
      rev(N);
      return 0;
}

