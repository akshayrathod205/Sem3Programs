#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;
int length=0;

void insertStart(int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=head;
    head = ptr;
    length++;
}
void insertIndex(int data, int n)
{
    struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    p = head;
    for(int i=1;i<n-1;i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    length++;
}
void insertEnd(int data)
{
	struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    p = head;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    length++;
}
void deleteStart()
{
    if(head == NULL)
        printf("\nList is empty");
    else{
	    head = head->next;
        length--;
        printf("Node at the begining is deleted.");
    }
}
void deleteIndex(int n)
{
    struct Node *p1, *p2;
    if(head == NULL)
        printf("\nList is empty");
    else{
        p1 = head;
            p2 = head;
        for(int i=1;i<n-1;i++)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
	    p2 = p2->next;
        p1->next = p2->next;
        length--;
        printf("Node deleted");
    }
}
void deleteEnd()
{
    struct Node *p;
    if(head == NULL)
        printf("\nList is empty");
    else{
        p = head;
        for(int i=1;i<length-1;i++)
        {
            p = p->next;
        }
        printf("Node at the end is deleted.");
    }
}
void display()
{
    struct Node *p;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        p = head;
        printf("Displaying the List...\n");
        for(int i=0;i<length-1;i++)
        {
            printf("%d, ", p->data);
            p = p->next;
        }
        printf("%d", p->data);
    }
}

int main()
{
    int choice=1;
    printf("\n\n1. Insert Node at the Begining.\n2. Insert Node at an Index.\n3. Insert Node at the End.\n4. Delete Node at the Begining.\n5. Delete Node at an Index.\n6. Delete Node at the End.\n7. Display list.\n8. Exit.\n");
    while(choice)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                int data;
                printf("Enter the data you want to insert: ");
                scanf("%d", &data);
                insertStart(data);
                printf("Node inserted");
                break;
            }
            case 2:
            {
                int data, index;
                printf("Enter the data: ");
                scanf("%d", &data);
                printf("Enter the index: ");
                scanf("%d", &index);
                insertIndex(data, index);
                printf("Node inserted");
                break;
            }
            case 3:
            {
                int data;
                printf("Enter the data you want to insert: ");
                scanf("%d", &data);
                insertEnd(data);
                printf("Node inserted");
                break;
            }
            case 4:
            {
                deleteStart();
                break;
            }
            case 5:
            {
                int index;
                printf("Enter the index of the node you want to delete: ");
                scanf("%d", &index);
                deleteIndex(index);
                break;
            }
            case 6:
            {
                deleteEnd();
                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 8:
            {
                printf("Exiting...");
                choice = 0;
                break;
            }
            default:
            {
                printf("Please enter a valid choice.");
            }
        }
    }
}
