#include<stdio.h>       //TSRN factorial of a number
void fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    fact(x);
    return 0;
}
