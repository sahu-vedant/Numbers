// I am Vedant Sahu, owner of this program, got it?

// <<<<----------------------------- PRIME NUMBER ----------------------->>>>

#include <stdio.h>

int main()
{

  int a = 2, i, r = 0;

  printf("Enter any Number :");
  scanf("%d", &i);

  while (i > a && r == 0)
  {
    if (i % a == 0)
    {
      r = 1;
    }
    else if (i % a != 0)
    {
      r = 0;
    }
    a++;
  }

  if (r == 1 || i == 0 || i == 1)
  {
    printf("%d is not a Prime Number", i);
  }

  else
  {
    printf("%d is a Prime Number", i);
  }

  return 0;
}

// © all rights reserved 2024