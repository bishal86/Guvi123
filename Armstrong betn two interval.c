#include<stdio.h>
int main(){
    int n,rem,sum,temp;
    int f,l;

    printf("Enter the first no");
    scanf("%d",&f);

    printf("Enter the last no ");
    scanf("%d",&l);

   
    for(n=f;n<=l;n++){
         temp=n;
         sum = 0;

         while(temp!=0){
             rem=temp%10;
             temp=temp/10;
             sum=sum+(rem*rem*rem);
         }
         if(sum==n)
          printf("%d\t",n);
            
    }

    return 0;
}

