#include<stdio.h>
int main()
{  
    float b,h,d,pf,gs;
    scanf("%f%f%f",&b,&h,&d);
    pf=0.12*b;
    gs=b+h+d+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}
    