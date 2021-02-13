#include <stdio.h>
#include "sine.c"
#define PI 3.14159265359
#define ACCURACY 16

int main(void)
{
    double x = PI / 2.0000000001;
    double y =  tangent(x, ACCURACY);
    printf("%lf\n", y);
    return 0;
}
