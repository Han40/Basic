//Mar 22, 2015 - Pupil
//Linked List: Insert in nth Position

#include <stdio.h>
#include <stdlib.h>



struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data, int n){// n is position

    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node*));
    temp1->data = data;
    temp1->next = NULL;

    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }

    struct Node* temp2 = head;

    int i;
    for(i=0; i<n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}
void Print(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
/*

    head = NULL;

    printf("How many numbers? \n");

    int n, i, x;
    int element;

    // n is position here
    scanf("%d", &element);
    for(i=0; i<element; i++){
        printf("Enter the number and position \n");
        scanf("%d \n", &x);
        scanf("%d \n", &n);
        Insert(x, n);
        Print();
    }

*/

/*

    x is data
    n is position you want to insert
*/
    head = NULL;
    int data, position;
    scanf("%d", &data);
    scanf("%d", &position);
    Insert(data, position);

    scanf("%d", &data);
    scanf("%d", &position);
    Insert(data, position);

    Print();

/*
    head = NULL;//empty list

    Insert(2,1); // empty list
    Insert(3,1); // List: 2
    Insert(4,1); // List: 2, 3
    Insert(5,2); // List: 4,5,2,3
                //List: 5, 4, 3, 2
    Print();
*/

}
