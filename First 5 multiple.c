#include<stdio.h>
void mul(int n)
{
    int i,a;
    for(i=1;i<=5;i++)
    {
    a=n*i;
    printf("%d\t",a);
    }
}

int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	mul(n);
	return 0;
}
