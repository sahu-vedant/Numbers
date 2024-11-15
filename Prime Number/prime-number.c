// I am Vedant Sahu, owner of this program, got it?

// <<<<----------------------------- PRIME NUMBER ----------------------->>>>

#include <stdio.h>

int main()
{
  int i = 2, n, r = 0;

  printf("Enter any Number :");
  scanf("%d", &n);

  for (; i < n; i++) // it can also be done using while loop, but i am using for loop here...
  {
    if (n % i == 0)
    {
      r = 1;
      break;
    }
    else
    {
      r = 0;
    }
  }

  if (r == 1 || n == 0 || n == 1)
  {
    printf("%d is not a Prime Number", n);
  }
  else
  {
    printf("%d is a Prime Number", n);
  }

  return 0;
}

// © all rights reserved 2024