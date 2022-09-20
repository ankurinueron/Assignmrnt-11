#include<stdio.h>       //N prime numbers b/w two numbers TSRN
void Nprime(int m,int n)
{
int x,z,flag=0;
for(x=m;x<=n;x++)
{
    flag=0;
for(z=2;z<=n/2;z++)
{
if(x%z==0)
{
   flag=1;
   break;
}
}
if(flag==0)
        printf("%d ",x);
}
}
int main()
{
    int n,m;
    printf("Enter the numbers : ");
    scanf("%d%d",&m,&n);
    Nprime(m,n);
    return 0;
}
