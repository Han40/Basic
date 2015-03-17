// Linked List: Delete nth position in a list


#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node *head;// global

void Insert(int data, int n){

    //int n;
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node*));// C++: Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node *temp2 = head;// Start with head, then run a loop

    int i;
    for(i = 0; i<n-2; i++){//point temp2 to (n-1)th node
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}// insert an integer at the end of list

void Print()
{
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}// print all elements in the list

void Delete(int n){
    struct Node* temp1 = head;
    //////////////// added latest
    if(n == 1){
        head = temp1->next;
        free(temp1);
        return;
    }
    ///////////////

    int i;
    for(i = 0; i<n-2; i++)
        temp1= temp1->next;
    //temp1 points to (n-1)th Node
    struct Node *temp2 = temp1->next;// nth Node
    temp1->next = temp2->next; // (n+1)th Node
    free(temp2); // C++, delete temp2;

} // Delete node at position n

int main()
{
    head = NULL; // empty list
    Insert(2,1);
    Insert(4,1);
    Insert(6,1);
    Insert(5,1); // List : 2, 4, 6, 5
    Print();

    int n;
    printf("Enter a position\n");
    scanf("%d", &n);
    Delete(n);
    Print();


}
