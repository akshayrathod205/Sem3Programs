#include<stdio.h>
void insertionSort(int arr[],int n) {
    int i,j,temp;
    for(i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void selectionSort(int arr[],int n) {
    int i,j,temp,min;
    for(i = 1; i < n; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] <= arr[j+1])
                min = j;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp; 
        }
    }
} 
void main() {
    int i,sort[100],size,choice;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
        scanf("%d",&sort[i]);
    printf("1.Insertion Sort\n2.Selection Sort\n"); 
    printf("Enter your choice: ");
    scanf("%d",&choice);  
    switch(choice) {
        case 1: insertionSort(sort,size);
                printf("\nArray is sorted using Insertion Sort\n");
                break;
        case 2: selectionSort(sort,size);
                printf("\nArray is sorted using Selection Sort\n");
                break;
        default: printf("Enter valid choice");
    }
    printf("After Sorting...\n");
    for(i = 0; i < size; i++)
        printf("%d ",sort[i]);
}
