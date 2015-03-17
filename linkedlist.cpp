#include <stdio.h>
#include <stdlib.h>

struct node{

    int x;
    struct node *next;

};


int main()
{
    struct node *root;//Head - the unchange first node

    /*root pointers to a node struct*/
    root = (struct node *) malloc( sizeof(struct node));

    /*The node root pointers to has its next pointer equal to a null pointer set*/
    root->next = 0;

    /**/
    root->x = 5;
}
