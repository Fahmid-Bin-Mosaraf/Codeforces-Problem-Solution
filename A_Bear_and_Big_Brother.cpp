#include<stdio.h>
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i=1; ;i++)
    {
        a*=3;
        b*=2;
        if(a>b)break;
    }
    printf("%d", i);
}