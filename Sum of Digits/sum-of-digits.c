// I am Vedant Sahu, owner of this program, got it? created on 6th November.

// <<<------------------------------- SUM OF DIGITS (if else if ladder) --------------------------------->>>

#include <stdio.h>

#define I 10
#define F 10.0

int main()
{
    long int i, i1, i2, i3, i4, i5, i6, i7, i8, s, f1, f2, f3, f4, f5, f6, f7, f8;

    printf("Enter any number : ");
    scanf("%ld", &i);

    if (i >= 0 && i < I) // it is for one digit numbers
    {
        printf("->    You've entered %ld & it has only one digit, so,\n->    the sum of the digit is %ld", i, i);
    }

    else if (i >= I && i < 100) // it is for 2 digits number
    {

        i1 = i / I;
        f1 = (i % I);
        s = i1 + f1;

        printf("->    You've entered %ld\n->    it has 2 digits %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld =  %ld", i, i1, f1, i1, f1, s);
    }

    else if (i >= 100 && i < 1000) // it is for 3 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        s = i2 + f2 + f1;

        printf("->    You've entered %ld\n->    it has 3 digits %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld = %ld", i, i2, f2, f1, i2, f2, f1, s);
    }

    else if (i >= 1000 && i < 10000) // it is for 4 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        i3 = i2 / I;
        f3 = i2 % I;
        s = i3 + f3 + f2 + f1;
        printf("->    You've entered %ld\n->    it has 4 digits %ld, %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld + %ld = %ld", i, i3, f3, f2, f1, i3, f3, f2, f1, s);
    }

    else if (i >= 10000 && i < 100000) // it is for 5 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        i3 = i2 / I;
        f3 = i2 % I;
        i4 = i3 / I;
        f4 = i3 % I;
        s = i4 + f4 + f3 + f2 + f1;
        printf("->    You've entered %ld\n->    it has 5 digits %ld, %ld, %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld + %ld + %ld = %ld", i, i4, f4, f3, f2, f1, i4, f4, f3, f2, f1, s);
    }

    else if (i >= 100000 && i < 1000000) // it is for 6 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        i3 = i2 / I;
        f3 = i2 % I;
        i4 = i3 / I;
        f4 = i3 % I;
        i5 = i4 / I;
        f5 = i4 % I;
        s = i5 + f5 + f4 + f3 + f2 + f1;
        printf("->    You've entered %ld\n->    it has 6 digits %ld, %ld, %ld, %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld + %ld + %ld + %ld = %ld", i, i5, f5, f4, f3, f2, f1, i5, f5, f4, f3, f2, f1, s);
    }

    else if (i >= 1000000 && i < 10000000) // it is for 7 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        i3 = i2 / I;
        f3 = i2 % I;
        i4 = i3 / I;
        f4 = i3 % I;
        i5 = i4 / I;
        f5 = i4 % I;
        i6 = i5 / I;
        f6 = i5 % I;
        s = i6 + f6 + f5 + f4 + f3 + f2 + f1;
        printf("->    You've entered %ld\n->    it has 7 digits %ld, %ld, %ld, %ld, %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld + %ld + %ld + %ld + %ld = %ld", i, i6, f6, f5, f4, f3, f2, f1, i6, f6, f5, f4, f3, f2, f1, s);
    }

    else if (i >= 10000000 && i < 100000000) // it is for 8 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        i3 = i2 / I;
        f3 = i2 % I;
        i4 = i3 / I;
        f4 = i3 % I;
        i5 = i4 / I;
        f5 = i4 % I;
        i6 = i5 / I;
        f6 = i5 % I;
        i7 = i6 / I;
        f7 = i6 % I;
        s = i7 + f7 + f6 + f5 + f4 + f3 + f2 + f1;
        printf("->    You've entered %ld\n->    it has 7 digits %ld, %ld, %ld, %ld, %ld, %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld + %ld + %ld + %ld + %ld + %ld = %ld", i, i7, f7, f6, f5, f4, f3, f2, f1, i7, f7, f6, f5, f4, f3, f2, f1, s);
    }

    else if (i >= 100000000 && i < 1000000000) // it is for 9 digits number
    {

        i1 = i / I;
        f1 = i % I;
        i2 = i1 / I;
        f2 = i1 % I;
        i3 = i2 / I;
        f3 = i2 % I;
        i4 = i3 / I;
        f4 = i3 % I;
        i5 = i4 / I;
        f5 = i4 % I;
        i6 = i5 / I;
        f6 = i5 % I;
        i7 = i6 / I;
        f7 = i6 % I;
        i8 = i7 / I;
        f8 = i7 % I;
        s = i8 + f8 + f7 + f6 + f5 + f4 + f3 + f2 + f1;
        printf("->    You've entered %ld\n->    it has 7 digits %ld, %ld, %ld, %ld, %ld, %ld, %ld, %ld & %ld,\n->    the sum of it's digit is : \n->    %ld + %ld + %ld + %ld + %ld+ %ld + %ld + %ld + %ld = %ld", i, i8, f8, f7, f6, f5, f4, f3, f2, f1, i8, f8, f7, f6, f5, f4, f3, f2, f1, s);
    }

    else
    {
        printf("You've entered a Number having digits more than 7,\nI am not capable of doing it, ask my owner to upgrade me for this.");
        // nothing else
    }

    return 0;
}

// © all rights reserved 2024