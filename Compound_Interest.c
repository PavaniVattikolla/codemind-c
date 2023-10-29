#include<stdio.h>
#include<math.h>

int main()
{
    int p, r, t;
    float c;
    scanf("%d%d%d", &p, &r, &t);
    c = p * (pow(1 + (r / 100.0), t) - 1);
    printf("%.2f", c);
}