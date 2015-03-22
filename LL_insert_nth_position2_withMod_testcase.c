//Mar 22, 2015 - Pupil
//Linked List: Insert in nth Position

#include <stdio.h>
#include <stdlib.h>

struct Node* head;

struct Node{
    int data;
    struct Node* next;
};

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
//Modified test case
//By using root and ask user to insert
//#scanf, &(pointer), for loop

    head = NULL;
    int data, position, num, i;

    printf("How many number you want to Insert? ");
    scanf("%d", &num);

    //int i;
    for(i=0; i<num; i++){

        printf("The number want to Insert is \n");
        scanf("%d", &data);
        printf("The position of number want to Insert is \n");
        scanf("%d", &position);
        Insert(data, position);
        Print();
        printf("\n");

    }

}
