#include<stdio.h>       //next prime number TSRS
int nxtprime(int x)
{
    int i,j,flag=0;
    for(i=x;1;i++)
    {
        flag =0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            flag =1;
            //break;
    }
    if(flag==0){
        return i;
        //break;
    }
    }
}
int main()
{
    int x,k;
    printf("Enter the number : ");
    scanf("%d",&x);
    k=nxtprime(x);
    printf("%d",k);
    return 0;
}
