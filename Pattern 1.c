///pattern 1: c program to print sqaure shape using *
#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter number of rows/columns: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
