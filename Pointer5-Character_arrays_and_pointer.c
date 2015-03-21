//Character arrays and pointers

#include <stdio.h>
#include <stdlib.h>

#include<string.h> // Bunch of function for string

void print(char* D){

    int i = 0;
    while(D[i] != '\0'){
        printf("%c", D[i]);
        i++;
    }

}

int main()
{
    //char *C = "JOHNMMM" // string gets stored as compile time constant
                            //save as Text segment in the array, and cannot be modified
    char C[20] = "JOHNMMM"; // char C[20] = "JOHN";
  //  C[0] = 'J';
  //  C[1] = 'O';
  //  C[2] = 'H';
  //  C[3] = 'N';
  //  C[4] = '\0';
    int len = strlen(C); // strlen is from <string.h>
    printf("%d\n\n", len); // %s is for string and character

    char D[20] = "Hello";
    print(D);

}
