///pattern 1: c program to print right angle triangle shape using *
#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter number of rows/columns: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}

