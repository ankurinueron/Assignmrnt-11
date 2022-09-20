#include<stdio.h>       //number is prime or not TSRS
int prime(int x)
{
    int i,flag=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0){
            return flag=1;
            break;
        }
    }
    return flag =0;
}
int main()
{
    int x,k;
    printf("Enter the number : ");
    scanf("%d",&x);
    k=prime(x);
    if(k==1){
        printf("The number is not a prime number");
    }
    else
        printf("The number is a prime number");
    return 0;
}
