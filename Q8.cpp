#include<stdio.h>       //pascal triangle using function TSRN
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int x,int y)
{
    return fact(x)/(fact(y)*fact(x-y));
}
void pascal(int x)
{
    int i,j;
    for(i=0;i<=x;i++)
    {
        for(j=1;j<=(x-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
            //if((j>=(6-i))&&(j<=(4+i)))
            printf("%d ",comb(i,j));
            printf("\n");

        //else
           // printf(" ");

}
}
int main()
{
    int x,y;
    printf("Enter the rows : ");
    scanf("%d",&x);
    pascal(x);
    return 0;
}
