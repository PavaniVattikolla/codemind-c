#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d", &n);
    int flag = 0;
    while (a <= n)
    {
        if (a == n)
        {
            flag = 1;
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }
    if (flag == 1)
    {
        printf("True");
    } else 
    {
        printf("False");
    }
}