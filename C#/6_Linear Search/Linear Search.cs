using System;

namespace Algorithm {

    class LinearSearch {

        public static int search(int[] arr, int x) {
            for(int k = 0; k < arr.Length; k++) {
                if(arr[k] == x) {
                    return k;
                }
            }
            return -1;
        }

        public static void Main(string[] args) {
            int[] arr = { 4, 2, 6, 42 };
            Console.Write(search(arr, 42));
        }
    }
}