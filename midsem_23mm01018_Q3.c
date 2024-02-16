#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D;
    float R1, R2;
    printf("Enter the coefficents a,b,c :");
    scanf("%d%d%d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    R1 = ((-b + sqrt(D)) / 2 * a);
    R2 = ((-b - sqrt(D)) / 2 * a);
    (D >= 0 ? printf("The roots of the equation are %0.2f,\t %0.2f", R1, R2) : printf("Imaginary Roots"));
    return 0;
}
