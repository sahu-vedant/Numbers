// I am Vedant Sahu, owner of this program, got it?

// <<<<<---------------------- roots of QUADRATIC EQUATION ----------------------------->>>>

#include <stdio.h>
#include <math.h> // necessary for using sqrt() function

int main()
{

    int a, b, c, d;
    float x, y, e;

    printf("Enter any a : "); // 1st Coefficient of Quadratic Equation
    scanf("%d", &a);
    printf("Enter any b : "); // 2nd Coefficient of Quadratic Equation
    scanf("%d", &b);
    printf("Enter any c : "); // 3rd Coefficient of Quadratic Equation
    scanf("%d", &c);

    d = (b * b) - (4 * a * c); // calculating discriminant

    if (d < 0)
    {
        printf("Quadratic Equation don't have any real roots\n");
        x = ((-b) + sqrt(d)) / 2 * a;
        y = ((-b) - sqrt(d)) / 2 * a;
        printf("%.2f & %.2f", x, y);
    }
    else if (d > 0)
    {
        printf("Quadratic Equation has 2 distinct roots\n");
        x = ((-b) + sqrt(d)) / 2 * a;
        y = ((-b) - sqrt(d)) / 2 * a;
        printf("%.2f & %.2f", x, y);
    }
    else
    {
        printf("Quadratic Equation has 2 equal roots\n");
        x = ((-b) + sqrt(d)) / 2 * a;
        y = ((-b) - sqrt(d)) / 2 * a;
        printf("%.2f & %.2f", x, y); //%.2f will print 2 digits after the decimal point, by default it'll print 6 digits
    }

    return 0;
}

// © all rights reserved 2024