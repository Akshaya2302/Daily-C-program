#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float y, rt1, rt2;

    printf("Enter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

   y = b*b - 4*a*c;

    if (y> 0)
    {
        printf("Roots are real and distinct.\n");
        rt1 = (-b + sqrt(y)) / (2*a);
        rt2 = (-b - sqrt(y)) / (2*a);
        printf("Rt1 = %f, Rt2 = %f\n", rt1, rt2);
    }
    else if (y == 0)
    {
        printf("Roots are real and equal.\n");
        rt1 = rt2 = -b / (2*a);
        printf("Rt1 = Rt2 = %f\n", rt1);
    }
    else
    {
        printf("Roots are imaginary.\n");
        float realPart = -b / (2*a);
        float imagPart = sqrt(-y) / (2*a);
        printf("Rt1 = %f + %fi, Rt2 = %f - %fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
