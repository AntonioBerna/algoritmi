#include <iostream>
using namespace std;

void Merge(int *a, int from, int to, int mid){
	int i = from;
	int j = mid + 1;
	int k = 0;

	int temp[to-from+1];

	while(i <= mid && j <= to){
		if(a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}else{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while(i <= mid){
		temp[k] = a[i];
		k++;
		i++;
	}

	while(j <= to){
		temp[k] = a[i];
		k++;
		j++;
	}

	for(i = from; i <= to; i++){
		a[i] = temp[i-from];
	}
}

void MergeSort(int *a, int from, int to){
	int mid;

	if(from < to){
		mid = (from + to)/2;

		MergeSort(a, from, mid);
		MergeSort(a, mid+1, to);

		Merge(a, from, to, mid);
	}
}

int main(){
	int arr[] = {10, 54, 63, 6, 40, 11, 41, 32, 17, 22};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	MergeSort(arr, 0, n-1);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}