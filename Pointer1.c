// Pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *p;
    p = &a; // address of a

    // is same as //
    //    int *p = &a;
    //or  int* p = &a;

    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);

    *p = 12;
    printf("Value of P is %d\n", *p); // value of p
    printf("Address of P is %d\n", p); // address of p
    printf("Increment Address of P is %d\n", p+1); // address of p + 4 bytes
    printf("Increment Address of P is %d\n", p+2); // address of p + 4 bytes

    printf("Value of P is %d\n", *p+2); // address of p + 4 bytes

    return 0;
}
