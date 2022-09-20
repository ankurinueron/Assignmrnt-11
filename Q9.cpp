#include<stdio.h>       //square of a number using function
void square(int x)
{
    printf("square is : %d",x*x);
}
int main()
{
    int x;
    printf("enter any number : ");
    scanf("%d",&x);
    square(x);
    return 0;
}

