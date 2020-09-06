function insertionSort(array){
    var j;
    for(var k = 1; k < array.length; k++){
        j = k;
        while(j > 0 && array[j-1] > array[j]){
            var temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
        }
    }
}

var array = [12, 11, 13, 5, 6]
insertionSort(array);
console.log(array);