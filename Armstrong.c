#include<stdio.h>
int main(){
    int n,rem,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;
    while(n!=0){
         rem=n%10;
         n=n/10;
         sum=sum+(rem*rem*rem);
    }
    if(sum==temp)
         printf("%d is an Armstrong number",temp);
    else
         printf("%d is not an Armstrong number",temp);

    return 0;
}
