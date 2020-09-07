#include <stdio.h>
#include <stdlib.h>

// Prototipi di funzioni
int search(int arr[], int n, int x);

int search(int arr[], int n, int x){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    int arr[] = {5, 2, 42, 6, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Elemento trovato all'indice: %d", search(arr, n, 42));
    return 0;
}
