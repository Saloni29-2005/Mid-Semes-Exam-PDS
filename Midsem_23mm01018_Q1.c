#include <stdio.h>
int main()
{
    float r, SurfaceArea, Volume;
    printf("Enter the radius of the sphere :");
    scanf("%f", &r);
    SurfaceArea = 4 * 3.14 * r * r;
    Volume = (4 / 3) * 3.14 * r * r * r;
    printf("The Surface Area of the sphere is %0.2f", SurfaceArea);
    printf("The Volume of the sphere is %0.2f", Volume);
    return 0;
}
