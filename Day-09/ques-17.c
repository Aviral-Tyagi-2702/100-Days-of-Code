#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d, root1, root2, real, imag;

    printf("Enter a, b, and c :");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two distinct and real roots exist.\n");
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Two equal and real roots exist.\n");
        printf("root1 = root2 = %.2f\n", root1);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Two distinct complex roots exist.\n");
        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n", real, imag, real, imag);
    }
    return 0;
}