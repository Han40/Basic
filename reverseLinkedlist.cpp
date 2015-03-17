//https://www.youtube.com/watch?v=sYcOK51hl-A

#include <stdio.h>
#include <stdlib.h>

struct node{

    int x;
    struct node *next;

};

struct Node *head;

void Reverse(){

   // struct Node *current, *temp, *prev;
    struct Node *current, *prev, *next;
    temp = head;
    prev = NULL;

 //   while(temp != NULL){
  //      temp -> next = prev;
   // }

    while(current != NULL){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;

    }

    //corner case
    head = prev;

    return head;
}


int main()
{

}
