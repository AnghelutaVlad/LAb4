#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int Data;

typedef struct Node{
	Data val;
	struct Node* next;
} Node;

void addAtBeginning(Node **head, Data v);
void addAtEnd(Node** head, Data v);
void display(Node *head);
void modify(Node*head,Data k);
void functiontime(Node**head,Data k);
void addandmodify(Node**head,Data k);
