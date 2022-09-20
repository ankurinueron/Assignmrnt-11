#include<stdio.h>       //HCF of two numbers TSRS
int hcf(int x,int y)
{
    int i,min,m=1;
    min=x>y?x:y;
    for(i=1;i<=min;i++)
    {
        if((x%i==0)&&(y%i==0))
        m=i;
    }
    return m;
}
int main()
{
    int x,y,k;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    k=hcf(x,y);
    printf("HCF is : %d",k);
    return 0;
}
