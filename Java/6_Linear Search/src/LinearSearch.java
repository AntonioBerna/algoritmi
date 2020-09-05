public class LinearSearch {

    public static int search(int[] arr, int x){
        for(int k = 0; k < arr.length; k++){
            if(arr[k] == x){
                return k;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {4, 2, 6, 42};
        System.out.print(search(arr, 42));
    }
}
