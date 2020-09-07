#include <stdio.h>
#include <stdlib.h>

// Prototipi di funzioni
void swap(int *a, int *b);
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n){
    int i, j;
    for(i = 1; i < n; i++){
        j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(&arr[j], &arr[j-1]);
            j--;
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
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
