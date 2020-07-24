#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
	if(r >= l){
		int mid = l + (r - l)/2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid] > x){
			return binarySearch(arr, l, mid-1, x);
		}else{
			return binarySearch(arr, mid+1, r, x);
		}
	}
	return -1;
}

int main(){
	int arr[] = {3, 4, 23, 42, 77, 100};
	int n = sizeof(arr)/sizeof(arr[0]);

	int x = 42;
	int result = binarySearch(arr, 0, n-1, x);

	if(result == -1){
		cout << "Elemento non trovato!" << endl;
	}else{
		cout << "Elemento trovato all'indice: " << result << endl;
	}

	return 0;
}