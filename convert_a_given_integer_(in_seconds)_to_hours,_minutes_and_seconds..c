#include<stdio.h>
int main()
{  
    int i,H,M,S;
    scanf("%d",&i);
    H=i/3600;
    i %= 3600;
    M=i/60;
    S=i%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}