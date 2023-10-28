#include<stdio.h>
int main()
{
    int cp,sp,s;
    float p;
    scanf("%d%d",&cp,&sp);
    s=sp-cp;
    p=(s*1.0/cp)*100;
    printf("%.2f",p);
    
}