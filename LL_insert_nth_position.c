#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;
    struct Node *next;

};

struct Node *head;

void Insert(int data, int n){

    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node*));// C++: Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    if(n == 1){
        temp1->next = head;
        head = temp1;
        return; // Return from here, and not executing furthur. 
    }
    

    struct Node *temp2 = head;// Start at the head, then run a loop

    int i;
    for(i = 0; i<n-2; i++){// go to (n-1)Node 
        temp2 = temp2->next; //** 一句话就是说，我们想temp2 指向 (n-1)th Node, 那就要跑for loop (n-2)次
				//因为 (n-2) 的 next 就是 (n-1)
    }
   
    temp1->next = temp2->next; // Now, if you think about temp2. Its address and its next address are the same. And they are (n-1)Node's address 
    temp2->next = temp1;
}

void Print()
{
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;//empty list

    Insert(2,1); // empty list
    Insert(3,1); // List: 2
    Insert(4,1); // List: 2, 3
    Insert(5,1); // List: 4,5,2,3
    Print();
}
