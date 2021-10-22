// WAP To count the number of digits in an integer

#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("\nENTER AN INTEGER: ");
    scanf("%d", &n);

    while(n!=0)
    {
        n/=10;
        ++count;
    }
    printf("\nNUMBER OF DIGITS: %d", count);
    return 0;
}
