// I am Vedant Sahu, owner of this program, got it?

// <<<<-------------------------------------- ARMSTRONG NUMBER -------------------------------->>>>>

#include <stdio.h>

int main()
{

    int i = 0, j, inum, fnum = 0, p, n;

    printf("Enter any Number : ");
    scanf("%d", &n);
    inum = n;

    while (n != 0) // to find no. of digits
    {
        i++;
        n /= 10;
    }
    
    n = inum;

    while (n != 0) // outer loop used to add powers
    {
        p = 1;
        for (j = 0; j < i; j++) // inner loop used to calculate powers
        {
            p *= (n % 10);
        }
        fnum += p;
        n /= 10;
    }

    if (fnum == inum)
    {
        printf("%d is an Armstrong number", inum);
    }
    else
    {
        printf("%d is not an Armstrong number", inum);
    }

    return 0;
}

// © all rights reserved 2024