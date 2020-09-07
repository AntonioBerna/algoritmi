#include <stdio.h>
#include <stdlib.h>

// Prototipi di funzioni
void swap(int *a, int *b);
void selectionSort(int arr[], int n);
void printArray(int arr[], int n);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    int min, k, j;
    for(k = 0; k < n-1; k++){
        min = k;
        for(j = k + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[min], &arr[k]);
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
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
