//Linked List: Inserting a node at beginning

#include <stdio.h>
#include <stdlib.h>


struct Node{

    int data;
    struct Node *next; // Address of next node
                       // In C++, node *next;
};


struct Node *head;// Global variable
void Insert(int x)

{

    //struct Node* temp =  (Node*) malloc(sizeof(struct Node));
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
                         //In C, every time is struct Node
    temp->data = x; //(*temp).data = x;
   // temp->next = NULL; // Dereferencing and then modify

   // if(head != NULL) temp->next = head; // Insert a node at beginning of the list
    temp->next = head; //covering when head is empty

    head = temp; // Head point to temp, and value in head now will be address 100, check Note for graph
}

void Print()
{
    struct Node *temp = head;// In C need: struct Node *

    printf("List is: ");
    //Loop for Traversing
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next; // Traverse the list
    }
    printf("\n");


}

int main()
{
    head = NULL; // Empty list;
    printf("How many numbers?\n");

    int n,i,x;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x); //
        Print();
    }

}
