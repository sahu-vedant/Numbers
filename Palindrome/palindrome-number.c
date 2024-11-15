// I am Vedant Sahu, owner of this program, got it?

// <<<<<-------------------------------- PALIDROME NUMBER ------------------------------------->>>>>>

#include <stdio.h>

int main()
{
    int m, n, rem, rnum = 0; //
    printf("->  Enter any Number : ");
    scanf("%d", &n);
    m = n;

    while (n != 0)
    {
        rem = n % 10;
        rnum = rnum * 10 + rem;
        n /= 10;
    }
    printf("->  Reversed Number of %d is %d\n", m, rnum);

    if (m == rnum)
    {
        printf("->  The Number %d is a Palindrome Number");
    }
    else
    {
        printf("->  The Number %d isn't a Palindrome Number");
    }

    return 0;
}

// © all rights reserved 2024