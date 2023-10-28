#include<stdio.h>
int main()
{
    int p,c,b,m,cs,P;
    float t;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    t=p+c+b+m+cs;
    P=(t/500)*100;
    if (P>=90)
    {
        printf("Grade A");
    }
    else if (P>=80)
    {
        printf("Grade B");
    }
    else if (P>=70)
    {
        printf("Grade C");
    }
    else if (P>=60)
    {
        printf("Grade D");
    }
    else if (P>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
    
    
    
    
    
    
    
    
    
    
    
 