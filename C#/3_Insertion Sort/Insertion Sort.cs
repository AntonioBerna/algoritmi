using System;

namespace Algorithm {

    class InsertionSort {

        public static void insertionSort(int[] arr){
            int i, j;
            for(i = 1; i < arr.Length; i++){
                j = i;
                while(j > 0 && arr[j-1] > arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    j--;
                }
            }
        }

        public static void printArray(int[] arr){
            for(int i = 0; i < arr.Length; i++){
                Console.Write(arr[i] + " ");
            }
        }

        public static void Main(string[] args) {
            int[] arr = {5, 2, 42, 6, 1, 3, 2};
            insertionSort(arr);
            printArray(arr);
        }
    }
}