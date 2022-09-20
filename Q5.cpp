#include<stdio.h>       //printing N prime numbers TSRN
void Nprime(int n)
{
int x,z,flag=0;
for(x=1;x<=n;x++)
{
    flag=0;
for(z=2;z<=x/2;z++)
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
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    Nprime(n);
    return 0;
}
