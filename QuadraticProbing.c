#include<stdio.h>
#include<stdlib.h>
#define table_size 10

int hash[table_size] = {NULL};

void insert(){
    int key, hkey, index, i;
    printf("Enter a value: ");
    scanf("%d", &key);
    hkey = key % table_size;    // Hash Formula
    for (i = 0; i < table_size; i++){
        index = (hkey + i * i) % table_size;
        if (hash[index] == NULL){
            hash[index] = key;
            break;
        }
    }
    if (i == table_size)
        printf("\nValue cannot be inserted\n");
}
void search(){
    int key, hkey, i, index;
    printf("Enter the value: ");
    scanf("%d", &key);
    hkey = key % table_size;
    for (i = 0; i < table_size; i++){
        index = (hkey + i * i) % table_size;
       if (hash[index] == key){
            printf("Value is found %d", index);
            break;
        }
    }
    if (i == table_size){
        printf("Value not found");
    }
}
void display(){
    printf("Elements in the Hash table are\n");
    for (int i = 0; i < table_size; i++){
        printf("\nAt index: %d\tValue: %d", i, hash[i]);
    }
}
int main(){
    int choice;
    printf("1.Insert\n2.Display\n3.Search\n4.Exit\n");
    while (choice != 4){
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: insert();
                    break;
            case 2: display();
                    break;
            case 3: search();
                    break;
            case 4: printf("Exiting...");
                    break;
            default: printf("Invalid choice");
        }
    }
    

    return 0;
}