#include<stdio.h>
int stack[100],i,j,n,choice=0;top=0;
void push() {
    int val;
    if(top==n)
        printf("\nOverflow\n");
    else {
        printf("Enter the value: ");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}
void pop() {
    if(top==-1)
        printf("\nUnderflow");
    else {
        top--;
        printf("\nElement popped is %d",stack[top+1]);
    }
}
void peek() {
    if(top==0)
        printf("\nStack is empty");
    else 
        printf("Value at the top of stack is %d",stack[top]);
}
void display() {
    for(i=top;i>0;i--)
        printf("%d ",stack[i]);
    if(top==-1)
        printf("Stack is empty");
}
void main() {
    printf("Enter the number of student in stack: ");
    scanf("%d",&n);
    printf("----------------------------------Stack Operation using Arrays-------------------------------------\n");
    printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
    while(choice!=5) {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: printf("Exiting.....");
                    break;
            default: printf("Invalid input");
        }
    }
}