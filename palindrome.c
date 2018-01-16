#include<stdio.h>
#include<math.h>
void palindrome(int N)
{
	int reverse=0,rem, Original_no;
	Original_no=N;
    while(N!=0)
	{
	  rem=N%10;
	  reverse=reverse*10+rem;
	  N=N/10;
	}
	if(Original_no==reverse)
	printf("%d is a palindrome number",Original_no);
	else
	printf("%d is not a palindrome number",Original_no);
	
}
int main()
{
	int N;
	printf("Enter the Number");
	scanf("%d",&N);
	palindrome(N);
	return 0;
	
	
}
