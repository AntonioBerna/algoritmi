using System;

namespace Algorithm {

    class BinarySearch {

        public static int binarySearch(int[] arr, int l, int r, int x) {
            if(r >= l) {
                int mid = l + (r - l) / 2;

                if(arr[mid] == x){
                    return mid;
                }

                if(arr[mid] > x){
                    return binarySearch(arr, l, mid - 1, x);
                } else {
                    return binarySearch(arr, mid + 1, r, x);
                }
            }
            return -1;
        }

        public static void Main(string[] args){
            int[] arr = { 3, 4, 23, 42, 77, 100 };
            int x = 42;
            Console.Write(binarySearch(arr, 0, arr.Length - 1, x));
        }
    }
}