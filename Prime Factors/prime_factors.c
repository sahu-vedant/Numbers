// I am Vedant Sahu, owner of this program, got it?
// <<<<<<----------------------- to find PRIME FACTORS of a number ----------------------------->>>>>

#include <stdio.h>

int main()
{

    int i, n, num, flag;
    printf("Enter the number u want to find prime factors of : ");
    scanf("%d", &num);
    printf("%d = 1 ", num);

    for (n = 2; n <= num; n++)
    {
        flag = 1;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            for (; num % n == 0;)
            {
                printf("* %d ", n);
                num /= n;
            }
        }
    }

    return 0;
}