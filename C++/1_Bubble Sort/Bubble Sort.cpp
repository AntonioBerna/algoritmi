#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	bool swapped;

	for(int i = 0; i < n-1; i++){
		swapped = false;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}

		if(swapped == false){
			break;
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
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printArray(arr, n);
	return 0;
}