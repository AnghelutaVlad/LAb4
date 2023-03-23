#include "liste.h"
int main()
{
    Node* head;
    Data m=2,n=3;
    addAtBeginning(&head,m);
    addAtEnd(&head,n);
    display(head);
}
