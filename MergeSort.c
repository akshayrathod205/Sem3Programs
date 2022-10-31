#include<stdio.h>
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int low, int mid, int high){
    int i = low, j = mid + 1, k = low, temp[100];
    while (i <= mid && j <= high){
        if (arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
        arr[i] = temp[i]; 
}
void mergeSort(int arr[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
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
    mergeSort(arr, 0, size);
    printf("After sorting...\n");
    printArray(arr, size);
    
    return 0;
}