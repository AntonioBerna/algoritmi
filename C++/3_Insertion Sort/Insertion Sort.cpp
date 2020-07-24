#include <iostream>
using namespace std;

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
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}

int main() {
	int arr[] = {5, 2, 42, 6, 1, 3, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}