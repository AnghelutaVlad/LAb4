#include "liste.h"
int main()
{
    Node* head=NULL;
    Data n=5,k=3;
    for(Data i=0;i<n;i++)
        addAtEnd(&head,i);
    modify(head,k);
    display(head);
}
