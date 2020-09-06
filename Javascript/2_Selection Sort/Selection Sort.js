function selectionSort(array) {
    for(var k = 0; k < array.length; k++){
        var min = k;
        for(var j = k + 1; j < array.length; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        var temp = array[k];
        array[k] = array[min];
        array[min] = temp;
    }
}

var array = [64, 25, 12, 22, 11];
selectionSort(array);
console.log(array);