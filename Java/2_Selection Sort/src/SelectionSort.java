public class SelectionSort {

    public static void selectionSort(int[] arr){
        for(int k = 0; k < arr.length - 1; k++){
            int min = k;
            for(int j = k + 1; j < arr.length; j++){
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[k];
            arr[k] = temp;
        }
    }

    public static void printArray(int[] arr){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        selectionSort(arr);
        printArray(arr);
    }
}
