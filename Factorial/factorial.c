// I am Vedant Sahu, owner of this program, got it?

// <<<<<--------------------------------- FACTORIAL ------------------------------->>>>>

#include <stdio.h>

int main()
{

    int i, m, n;

    printf("Enter any number : ");
    scanf("%d", &n);
    m = 1;

    for (i = n; i > 0; i--) // u can also use while loop here...
    {
        m *= i;
    }
    printf("%d! = %d", n, m);
    return 0;
}

// © all rights reserved 2024