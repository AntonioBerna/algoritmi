#include <stdio.h>
#include <stdlib.h>

// Prototipi di funzioni
void swap(int *a, int *b);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    int swapped, i, j;

    for(i = 0; i < n-1; i++){
        swapped = 0;
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }

        if(swapped == 0){
            break;
        }
    }
}

void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {5, 2, 42, 6, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
