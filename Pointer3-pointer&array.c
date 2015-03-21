// Pointer and Array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = {2,4,5,8,1};

    printf("%d\n", A); // Address of first element in the array
    printf("%d\n", &A[0]); // Address of first element in the array
    printf("%d\n", A[0]); // // Value of first element in the array
    printf("%d\n", *A); // Value of first element in the array

    printf("\n\n"); // Value of first element in the array

    int i;
    for(i=0; i<5; i++){

    printf("%d\n", &A[i]); // Address of first element in the array
    printf("%d\n", A+i); // Address of first element in the array
    printf("%d\n", A[i]); // // Value of first element in the array
    printf("%d\n\n", *(A+i)); // Value of first element in the array

    }

}
