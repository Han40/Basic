// Pointer - include Type casting, and void pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is %d\n", sizeof(int) );
    printf("Address = %d, value = %d\n", p, *p);
  ///  printf("Address = %d, value = %d\n", p+1, *(p+1));

  ///  char *p0;
  ///  p0 = (char*)p; // Types Casting : http://web.eecs.utk.edu/~plank/plank/classes/cs360/360/notes/CStuff/lecture.html
  ///  printf("Size of char is %d bytes\n", sizeof(char));
  ///  printf("Address = %d, value = %d\n", p0, *p0); // why value is 1?
    // 1025 = 00000000 00000000 00000100 00000001
  ///  printf("Address = %d, value = %d\n", p0+1, *(p0+1)); // why value is 4?
    // 1025 = 00000000 00000000 00000100 00000001
    // Is because p0+1 take this(       ) in binary is 4

    // Void pointer - Genric pointer
    void *p0;
    p0 = p;
    printf(" Address = %d\n", p0); // can't dereferencing like *p0
    printf(" Address = %d\n", p0+1); // p0+1 works, but Video 3 say NO
}
