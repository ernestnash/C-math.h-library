#include <stdio.h>
#include <math.h>

int main()
{
    // constant PI is defined
    const double PI =  3.1415926;
    double x, result;

    x =  -0.5;
    result = acos(x);
    printf("Inverse of cos(%.2f) = %.2lf in radians\n", x, result);

    // converting radians to degree
    result = acos(x)*180/PI;
    printf("Inverse of cos(%.2f) = %.2lf in degrees\n", x, result);

    // paramter not in range
    x = 1.2;
    result = acos(x);
    printf("Inverse of cos(%.2f) = %.2lf", x, result);

    return 0;
}
