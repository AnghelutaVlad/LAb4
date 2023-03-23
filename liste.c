#include "liste.h"


void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}
void modify(Node *head,Data k)
{
    Node *p=head;
    for(int i=0;i<k;i++)
        p=p->next;
    scanf("%d",&p->val);
}
void functiontime(Node**head,Data k)
{
    Data n;
    for(Data i=0;i<k;i++)
    {
        scanf("%d",&n);
        addAtEnd(head,n);
    }
    Node *p=(*head);
    Node *v=p;
    while(v!=NULL)
    {
        p=v->next;
        while(p!=NULL)
        {
            v->val=(v->val)+(p->val);
            p=p->next;
        }
        v=v->next;
    }
}
void addandmodify(Node**head,Data k)
{
    Data n,i=0;
    Node *p=(*head),*v;
    scanf("%d",&n);
    if(k==0)
        {addAtBeginning(head,n);
         ((*head)->val)=((*head)->val)+((*head)->next)->val;
        return;}
    else
    {
        while((i<k-1) && p!=NULL)
        {
            p=p->next;
            i++;
            if(p==NULL)
            {
                printf("prea mult\n");
                return;
            }
        }
        if(p->next==NULL)
            {addAtEnd(head,n);
            for(Node *j=(*head);j!=(p->next);j=j->next)
                j->val=(j->val)+n;
             return;}
        else
        {
            v=malloc(sizeof(Node));
            v->val=n;
            v->next=p->next;
            p->next=v;
            v->val=(v->val)+((v->next)->val);
            for(Node *j=(*head);j!=v;j=j->next)
                j->val=(j->val)+n;
            return;
        }
    }
}
