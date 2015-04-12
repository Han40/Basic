// Singly Linked List in OOP techniques
// This code is convertible to Doubly Linked List
// Mar31
// Base on credit:
// http://www.cprogramming.com/snippets/source-code/double-linked-list-cplusplus

#include <iostream>

using namespace std;

struct Node{
    double value; // Data
    //Node* next;
    Node* next;

    // Initialization
    Node(double y)
    {
        value = y;
        next = NULL; // head pointer points to NULL
    }
};

class doubleLinkedList{
    Node* front;
  //  Node* back;

public:
    doubleLinkedList()
    {
        front = NULL;
    //    back = NULL;
    }
    ~doubleLinkedList(){
        destroyList();
    }
    void appendNodeFront (double x);
   // void appendNodeBack (double x);

    void dispNodesForward();
   // void dispNodesReverse();
    void destroyList();
};

void doubleLinkedList::appendNodeFront(double x)
{
    Node* n = new Node(x);
    if( front == NULL)
    {
        front = n;
       // back = n;
    }
    else{
            front->P = n;
            n->next = front;
            front = n;
    }
}

void doubleLinkedList::dispNodesForward(){
    Node *temp = front;
    cout << "\n\n Nodes in forward order:" <<endl;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->N;
    }

}

void doubleLinkedList::appendNodeBack(double x){

}

void doubleLinkedList::destroyList()
{
    Node* T = back;
    while(T != NULL){
        Node* T2 = T;
        T = T->P;
        delete T2;
    }
    front = NULL;
    back  = NULL;
}

int main(){

    doubleLinkedList* list = new doubleLinkedList();
    for( int i = 1; i < 4; i++ ){
        list->appendNodeFront(i*1.1);

        list->dispNodesForward();
       // list->dispNodesReverse();
    }

//    for( int i = 1; i < 4; i++ ){
//        list->appendNodeBack(11.0 - (1.1 * i));
//        cout << endl << endl;
//        list->dispNodesForwad();
//        list->dispNodesReverse();
//
//        cout << endl << endl;
//    }

    delete list;
    return 0;



}
