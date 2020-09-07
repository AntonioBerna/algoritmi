using System;

namespace Algorithm {

    class MergeSort {

        public static void merge(int[] arr, int l, int m, int r){
            int n1 = m - l + 1;
            int n2 = r - m;

            int[] L = new int[n1];
            int[] R = new int[n2];

            for(int x = 0; x < n1; x++){
                L[x] = arr[l+x];
            }

            for(int y = 0; y < n2; y++){
                R[y] = arr[m+1+y];
            }

            int i = 0, j = 0;
            int k = l;

            while(i < n1 && j < n2){
                if(L[i] <= R[j]){
                    arr[k] = L[i];
                    i++;
                }else{
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while(i < n1){
                arr[k] = L[i];
                i++;
                k++;
            }

            while(j < n2){
                arr[k] = R[j];
                j++;
                k++;
            }
        }

        public static void mergeSort(int[] arr, int l, int r){
            if(l < r) {
                int m = (l + r) / 2;
                mergeSort(arr, l, m);
                mergeSort(arr, m + 1, r);
                merge(arr, l, m, r);
            }
        }

        public static void printArray(int[] arr){
            for(int i = 0; i < arr.Length; i++){
                Console.Write(arr[i] + " ");
            }
        }

        public static void Main(string[] args) {
            int[] arr = {10, 54, 63, 6, 420};
            mergeSort(arr, 0, arr.Length - 1);
            printArray(arr);
        }
    }
}