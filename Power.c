#include<stdio.h>
#include<math.h>
void power(int N,int P)
{
	int power;
	power=pow(N,P);
	printf("Power of %d to %d is %d:",N,P,power);
}
int main()
{
	int N,P;
	printf("Enter the Number");
	scanf("%d",&N);
	printf("Enter power");
	scanf("%d",&P);
	power(N,P);
	return 0;
	
	
}
