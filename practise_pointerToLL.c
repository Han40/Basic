//Mar 22, 2015 - by Pupil

#include <stdio.h>

struct Node* head; // Head of Linked List

struct Node{
    int data;
    struct Node* next; // a Node pointer point to address of next node
};

int SumOfElements(int *A, int size){

    int i;
    int sum = 0;
    for(i=0; i<size; i++){
        sum += A[i];
    }
    return sum;
}


void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); // Allocate a memory for temp

    temp->data = x;
    temp->next = head;

    head = temp;
}
void Print(){
    struct Node* temp = head;
    printf("List is: ");

    while(temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    int a = 10;
    int* p; // Initialize pointer

    p = &a; // p point to address of a

//Can also be represent
    // int *p = &a;

    printf("address of a = %d\n", p);// Print address of a
    printf("value of a = %d\n", *p);

    //Modify value of a
    //By dereferencing p, then initialize

    *p = 20;

    printf ("value of p now is = %d\n", *p);
    printf ("value of a now is = %d\n", a); // Then value of a is modified as well
    printf ("address of a now is = %d\n", &a); // Same address
    printf ("address of p now is = %d\n", &p);

    //Incrementing p

    printf("Increment address of p %d\n", p+1);
    printf("Increment address of p %d\n", p+2);

    printf("\n\n\n\n\n\n");

    /* Above are using Stack Memory */

    /* Dynamic Memory is using Heap */
printf("Play with simple function sum of memory of array\n\n");

  //  int arrSize = 20;
    int A[20] = {1,2,3}; // Why using variable arrSize not working?
  //  int arrSize = 20;

    printf("A is %d\n", A[0]);
    printf("A is %d\n", A[1]);
    printf("A is %d\n", A[2]);
    printf("A is %d\n", A[3]);
    printf("A is %d\n", A[4]);
    printf("A is %d\n", A[5]);

printf("\n\n");
printf("Call by Reference\n\n"); // Took me an hour so far to review

    int i;
    for(i = 0; i<5; i++){
        printf("Address of element in the array %d\n", &A[i]); // Address of element in the array (increase every 4 bit)
        printf("*Address of element in the array %d\n", A+i); // Same representation
        printf("Value of element in the array %d\n", A[i]);
        printf("*value of element in the array %d\n", *A+i);
    }

    printf("\n\n");

    //Cool, break at 1 pm
    //3 pm
   // int size = 5;
   int size1 = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size1);

    printf("Total is = %d", total);

    printf("\n\n");
    // 8 pm

    /*Linked List*/

printf("********Linked List Starts from here********");
printf("\n\n");

//30 Min each
///Total 2 hrs

///Insert at beginning
///Insert at Nth position
///Delete at Nth Position
///Reverse Linked List


//First need struct node
//The program takes input as it ask Users
    head = NULL;
    printf("How many numbers you want to insert?");

    int n, index, x;

    //Take data from User input
    scanf("%d", &n);
    //Using loop to insert the data
    for(index=0; index<n; i++){
        printf("Enter the number");
        scanf("%d", &x);

        //Insert function
        Insert(x);
        //Print function
        Print(); // is a void function
    }

    free(x); // Do I need to free to avoid Heap crashes?

    //Took me 30 min to implement

    printf("\n\n");

}
