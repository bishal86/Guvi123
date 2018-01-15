#include<stdio.h>
void check(int n)
{   int sum=0,i;
    for(i=0;i<=n;i++)
    sum=sum+i;
    printf("Sum is %d",sum);
}

int main()
{
	int n;
	printf("Enter the natural number upto which yo want to calculate sum");
	scanf("%d",&n);
	check(n);
	return 0;
}
