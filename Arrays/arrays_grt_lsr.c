// I am Vedant Sahu, owner of this program, got it? only me..... 21st November 2024

// <<<<<<<<--------------------------------------- GREATEST/LESSER ELEMENTS OF AN ARRAY ---------------------------------------->>>>>>>>>>

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, a[50], g_index = 0, l_index = 0;

    printf("Enter the no. of elements u want to add in the array : ");
    scanf("%d", &n);

    // if n is not 0 then following statement will be executed
    if (n != 0)
    {
        printf("now, Enter the elements : \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
    }

    // now we have to calculate the greatest number
    for (i = 1; i < n; i++)
    {
        if (a[g_index] > a[i])
        {
            g_index = g_index;
        }
        else
        {
            g_index = i;
        }
    }

    // now we have to calculate the lesser element
    for (i = 1; i < n; i++)
    {
        if (a[l_index] < a[i])
        {
            l_index = l_index;
        }
        else
        {
            l_index = i;
        }
    }

    // if n is not 0 then following statement will be executed
    if (n != 0)
    {
        printf("The greatest elements of array is : %d\n", a[g_index]);
        printf("The smallest elements of array is : %d\n", a[l_index]);
    }
    // if n is 0 then following statement will be executed
    else
    {
        printf("Please enter atleast 1 element in the array!");
    }

    return 0;
}

// © all rights reserved 2024