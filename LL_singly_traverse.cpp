// Singly linked list + traverse
//Mar31

#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};


int main()
{    node* root;
     node* conductor;

     root = new node;
     root->next = 0;
     root->data = 12;

     conductor = root;
     if ( conductor != 0 ){
        while ( conductor->next != 0)
            conductor = conductor->next;
     }

     conductor->next = new node;
     conductor = conductor->next;
     conductor->next = 0;
     conductor->data = 42;

     conductor = root;
     while ( conductor != NULL ){
        cout << conductor->data<< ' ';
        conductor = conductor->next;
     }

     return 0;
}
