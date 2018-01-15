#include<stdio.h>
void check(int y)
{
	if ( y%400 == 0) 
    printf("%d is Leap Year", y);
  else if ( y%100 == 0) 
    printf("%d is not Leap Year", y);
  else if ( y%4 == 0 ) 
    printf("%d is Leap Year", y);
  else 
    printf("%d is not Leap Year", y);  
 
}

int main()
{
	int y;
	printf("Enter Year");
	scanf("%d",&y);
	check(y);
	return 0;
}
