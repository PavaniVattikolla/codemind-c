#include<stdio.h>
int main() 
{
    int u;
    float b, s;
    scanf("%d", &u);

    if (u <= 199)
    {
        b = u * 1.20;
    } 
    else if (u >= 200 && u < 400)
    {
        b = u * 1.50;
    } 
    else if (u >= 400 && u < 600)
    {
        b = u * 1.80;
    } else 
    {
        b = u * 2.00;
    }

    if (u > 400) 
    {
        s = b * 0.15;
    } else 
    {
        s = 100;
    }

    b += s;

    printf("%.2f
", b);
}





