#include<stdio.h>   //LCM of numbers TSRS
int lcm(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
            break;
    }
    return i;
}
int main()
{
    int x,y,k;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    k=lcm(x,y);
    printf("LCM is : %d",k);
    return 0;
}
