#include <stdio.h>
#include "fact.c"
#include <math.h>
#define PI 3.14159265359

double sine(double x, int accuracy)
{
    double sum = 0;

    for (int n = 0;  n <= accuracy; n++)
    {
        double temp = pow(-1.0, n) * pow(x, 2 * n + 1) / fact(2 * n + 1);
        sum = sum + temp;

    }

    return sum;
}

double cosine(double x, int accuracy)
{
    double cos = sine (PI / 2 - x, accuracy);
    return cos;
}

double tangent(double x, int accuracy)
{
    if (x == PI / 2)
    {
        printf("Not defined\n");
        return 1;
    }

    double tan = sine(x, accuracy) / cosine(x, accuracy);
    return tan;
}