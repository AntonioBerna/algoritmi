#include <iostream>
using namespace std;

int search(int arr[], int n, int x){
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {5, 2, 42, 6, 1, 3, 2};

	cout << "Elemento trovato all'indice: " << search(arr, 7, 42);

	return 0;
}