#include "liste.h"
int main()
{
    Node* head=NULL;
    Data n=5,k=3;
    functiontime(&head,n);
    addandmodify(&head,k);
    display(head);
}
