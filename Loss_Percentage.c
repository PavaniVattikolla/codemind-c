#include<stdio.h>
int main()
{
    int cp,sp,s;
    float l;
    scanf("%d%d",&cp,&sp);
    s=cp-sp;
    l=(s*1.0/cp)*100;
    printf("%.2f",l);
    
}