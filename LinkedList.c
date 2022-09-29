#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*first=NULL;
int item;
struct node *head;
void insertBeginning() {
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
        printf("\nOverflow");
    else {
        printf("Enter the value: ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted at beginning");
    }
}
void insertEnd() {
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
        printf("\nOverflow");
    else {
        printf("\nEnter the value: ");
        scanf("%d",&item);
        ptr->data = item;

        if(head == NULL) {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted at end");
        }
        else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted at end");
        }
    }
}
void insertMiddle() {
    int i, location;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
        printf("\nOverflow");
    else {
        printf("\nEnter the value: ");
        scanf("%d",&item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert: ");
        scanf("%d",&location);
        temp = head;
        for(i = 0; i < location; i++) {
            temp = temp->next;
            if(temp == NULL) {
                printf("\nCannot Insert");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode Inserted");
    }
}

void deleteBeginning() {
    struct node *ptr;
    if(head == NULL)
        printf("\nList is empty");
    else {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted at the beginning");
    }
}
void deleteEnd() {
    struct node *ptr, *ptr1;
    if(head == NULL) {
        printf("\nList is empty");
    }
    else if(head->next == NULL) {
        head = NULL;
        free(head);
        printf("\nNode is deleted at the end");
    }
    else {
        ptr = head;
        while(ptr->next != NULL){
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nNode is deleted at the end");
    }

}
void deleteMiddle() {
    struct node *ptr, *ptr1;
    int i, location;
    printf("\nEnter the location after which you want to delete: ");
    scanf("%d",&location);
    ptr = head;
    for(i = 0; i < location; i++) {
        ptr1 = ptr;
        ptr = ptr->next;
        if(ptr == NULL) {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\nNode deleted");
}

void display() {
    struct node *ptr;
    if(head == NULL)
        printf("List is empty");
    else {
        ptr = head;
        printf("The elements are\n");
        while(ptr != NULL) {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
void main() {
    int choice;
    printf("Operation on Linked Lists\n");
    printf("1.Insert Beginning\n2.Insert End\n3.Insert Middle\n4.Delete Beginning\n5.Delete End\n6.Delete Middle\n7.Display List\n8.Exit");
    do {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: insertBeginning();
                    break;
            case 2: insertEnd();
                    break;
            case 3: insertMiddle();
                    break;
            case 4: deleteBeginning();
                    break;
            case 5: deleteEnd();
                    break;
            case 6: deleteMiddle();
                    break;
            case 7: display();
                    break;
            case 8: printf("Exiting...");
                    break;
            default: printf("Invalid input");
        }
    }while(choice != 8);
}
