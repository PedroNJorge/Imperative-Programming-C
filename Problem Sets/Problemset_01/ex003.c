#include <stdio.h>

int main()
{
    int n = 0;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n-i)
            {
                printf("_");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
