#include<stdio.h>
#include<math.h>

int main()
{
    int num, orignum, rem, result = 0, n;
    printf("\nENTER NUMBER TO CHECK: ");
    scanf("%d", &num);
    orignum = num;

    while(orignum != 0)
    {
        orignum /= 10;
        ++n;
    }

    orignum = num;

    while(orignum != 0)
    {
        rem = orignum % 10;
        result += pow(rem, n);
        orignum /= 10;
    }

    if(result == num)
        printf("\nARMSTRONG NUMBER");
    else
        printf("\nNOT AN ARMSTRONG NUMBER");

    return 0;
}
