#include<stdio.h>
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int i,s=0;
    for(i=1;i<=5;i++){
        s=s+(fact(i)/i);
    }
    printf("%d",s);
    return 0;
}
