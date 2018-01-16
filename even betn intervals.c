#include<stdio.h>
void even(int f, int l)
{
	int i;
	for(i=f;i<=l;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
}
	
int main()
{
	int f,l;
	printf("Enter the first and last interval");
	scanf("%d%d",&f,&l);
	even(f,l);
	return 0;
	
	
}
