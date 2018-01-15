#include<stdio.h>
void check(int n)
{   int i;
	for(i=0;i<n;i++)
	printf("HELLO\n");
	
}

int main()
{
	int n;
    char c[10]="HELLO";
	printf("Enter No of times to print Hello");
	scanf("%d",&n);
	check(n);
	return 0;
}
