#include<stdio.h>
int main()
{
    float B;
    scanf("%f", &B);
    if (B<=10000)
    {  
        printf("%.2f",B+B*0.8+B*0.2);
    }
    else if (B<=20000)
    {  
        printf("%.2f",B+B*0.9+B*0.25);
    }
    else if (B>20000)
    {  
        printf("%.2f",B+B*0.95+B*0.3);
    }
}