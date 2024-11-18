// I am Vedant Sahu, owner of this program, got it?

// <<<<<----------------------- PRINTING PRIME NUMBERS BETWEEN TWO NUMBERS --------------------->>>>>>

#include <stdio.h>

int main()
{

    int a, b, i, j;

    printf("Enter the lower number : ");
    scanf("%d", &a);
    printf("Enter the upper number : ");
    scanf("%d", &b);

    a++;

    for (; a < b; a++)
    {
        for (i = 2; a > i; i++)
        {
            if (a % i == 0)
            {
                j = 0;
                break;
            }
            else
            {
                j = 1;
            }
        }
        if (j)
        {
            printf("%d\n", a);
        }
        else
        {
            // nothing...
        }
    }

    return 0;
}

// © all rights reserved 2024