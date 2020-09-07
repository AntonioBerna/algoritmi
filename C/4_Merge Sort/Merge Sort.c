#include <stdio.h>
#include <stdlib.h>

// Prototipi di funzioni
void merge(int arr[], int from , int to, int mid);
void mergeSort(int arr[], int from, int to);
void printArray(int arr[], int n);

void merge(int arr[], int from , int to, int mid){
    int i = from;
    int j = mid + 1;
    int k = 0;

    int temp[to-from+1];

    while(i <= mid && j <= to){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i <= mid){
        temp[k] = arr[i];
        k++;
        i++;
    }

    while(j <= to){
        temp[k] = arr[i];
        k++;
        j++;
    }

    for(i = from; i <= to; i++){
        arr[i] = temp[i-from];
    }
}

void mergeSort(int arr[], int from , int to){
    int mid;

    if(from < to){
        mid = (from + to) / 2;
        
        mergeSort(arr, from, mid);
        mergeSort(arr, mid + 1, to);
        merge(arr, from, to, mid);
    }
}

void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {10, 54, 63, 6, 40, 11, 41, 32, 17, 22};
	int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}
