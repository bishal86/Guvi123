#include<stdio.h>
int main()
{
  int arr[20],N,K,i,j,sum=0;
  
  printf("Enter the length of array");
  scanf("%d",&N);
  
  for(i=0;i<N;i++)
  {
  printf("Enter Numbers");
  scanf("%d",&arr[i]);
 }
  printf("Enter the no upto which sum is to be printed");
  scanf("%d",&K);
  
 for(j=0;j<K;j++)
 {
 	sum=sum+arr[j];
 }
  
  printf("sum is %d",sum);
  
}
