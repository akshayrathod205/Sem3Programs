#include<stdio.h>
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition(int arr[], int low, int high){
    int pivot = arr[low], i = low + 1, j = high, temp;
    do{
        while (arr[i] <= pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if (i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] =  arr[j];
    arr[j] = temp;
    return j;
}
int quickSort(int arr[], int low, int high){
    int partitionIndex;
    if (low < high){
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}
int main(){
    int arr[50], size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, size);
    printf("After sorting...\n");
    printArray(arr, size);
    
    return 0;
}