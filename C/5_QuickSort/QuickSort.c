#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipi di funzioni
void swap(int *a, int *b);
void quickSort(int *array, int left, int right);
int* makeRandomArray(int size);
void printArray(int *array, int size);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int *array, int left, int right){
    int l = left;
    int r = right - 1;
    int size = right - left;

    if(size > 1){
        int pivot = array[rand() % size + l];
        while(l < r){
            while(array[r] > pivot && r > l){
                r--;
            }

            while(array[l] < pivot && l <= r){
                l++;
            }

            if(l < r){
                swap(&array[l], &array[r]);
                l++;
            }
        }

        quickSort(array, left, l);
        quickSort(array, r, right);

    }
}

int* makeRandomArray(int size){
    int *array = malloc(sizeof(size)), i;

    srand(time(NULL));
    for(i = 0; i < size; i++){
        array[i] = rand() % 100;
    }

    return array;
}

void printArray(int *array, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(int argc, char const *argv[]) {
    int size = 10;
    int *array = makeRandomArray(size);
    quickSort(array, 0, size);
    printArray(array, size);
    return 0;
}
