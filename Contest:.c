#include<stdio.h>
int main()
{
    int x,a,b,t;
    scanf("%d%d%d",&x,&a,&b);
    t=a+(2*b);
    if (x<=t)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}