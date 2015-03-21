// Pointer - Array as function arguments (very useful for string)

#include <stdio.h>
#include <stdlib.h>

//Version 1

/*
int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    for(i = 0; i<size; i++){ // Need to know the size of array A[]
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {1,2,3,4,5};

    int size = sizeof(A)/sizeof(A[0]); // Divide whole size of array by size of one integer = number of elements in the array
    int total = SumOfElements(A, size);
    printf("Sum of elements = %d\n", total);

}
*/

// Mod version 1

//SOE() - sum of elements
int SumOfElements(int* A, int size) // Call by reference
{                                   // "int* A" or "int A[]"  ..it's the same..
    int i, sum = 0;
   /// int size = sizeof(A)/sizeof(A[0]);

    printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for(i = 0; i<size; i++){ // Need to know the size of array A[]
        sum += A[i]; // A[i] is *(A+i)
    }
    return sum;
}

int main()
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
  ///  int size = sizeof(A)/sizeof(A[0]); // Divide whole size of array by size of one integer = number of elements in the array
    int total = SumOfElements(A, size); // A can be used for &A[0], but can't do incrementing and decrementing
    printf("Sum of elements = %d\n", total);
    printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

}
