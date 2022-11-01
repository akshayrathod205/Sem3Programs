#include<stdio.h>
int queue[100],i,j,n,choice=0,rear=-1,front=-1;

void enqueue() {
    int val;
    if(rear == n-1)
        printf("\nOverflow\n");
    else {
        printf("Enter the value: ");
        scanf("%d",&val);
        if(front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = val;
    }
}
void dequeue() {
    if(front == -1 || front > rear)
        printf("\nUnderflow\n");
    else {
        printf("Element deleted from queue: %d\n",queue[front]);
        front++;
    }
}
void display() {
    int i;
    if(front == -1)
        printf("Queue is empty\n");
    else {
        printf("Displaying the Queue...\n");
        for(i = front; i <= rear; i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}

void main() {
    printf("\nEnter the number of students in queue: ");
    scanf("%d",&n);
    printf("------------------------------Queue operation using arrays--------------------------------------------\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while(choice != 4) {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting...");
                    break;
            default: printf("Invalid input");
        }
    }
}
