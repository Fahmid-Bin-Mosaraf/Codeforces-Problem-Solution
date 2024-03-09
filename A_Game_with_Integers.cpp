#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
        {
            printf("First\n");
        }
        else
        {
            printf("Second\n");
        }
    }
    return 0;
}