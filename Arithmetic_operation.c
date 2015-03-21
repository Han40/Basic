// Arithmetic Operator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //float a, b, sum, diff, product, c, remainder;
    // Can use double, %lf

    int a, b, sum, diff, product, c, remainder;
    printf("Enter a: ");
    scanf("%d", &a); // !!!!Can't use %.2f here

    printf("Enter b: ");
    scanf("%d", &b);

    sum = a+b;
    printf("a+b = %d\n", sum);
    diff = a-b;
    printf("a-b = %d\n", diff);

    product = a*b;
    printf("a*b = %d\n", product);

    c = a/b;
    printf("a/b = %d\n", c);

    remainder = a%b;
    printf("a%%b = %d\n", remainder); // %% to show "%"

    // Same result
    printf("Same result as: \n");
    printf("a%%b = %d\n", a%b);

}
