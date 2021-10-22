/* WAP a program to make a half pyramid using star */

#include<stdio.h>

int main()
{
    int i, j, lim;

    printf("\nENTER THE LIMIT OF PYRAMID: ");
    scanf("%d", &lim);

    for(j=1; j<=lim; j++)
    {
        for(i=1; i<=j; i++)
            printf("*");
        printf("\n");
    }

    return 0;
}
