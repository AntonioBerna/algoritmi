function bubbleSort(array){
	for(var i = 0; i < array.length - 1; i++){
		for(var j = 0; j < array.length - 1 - i; j++){
			if(array[j] > array[j+1]){
				var temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

var array = [14, 46, 43, 27, 57, 41, 45, 21, 70];
bubbleSort(array);
console.log(array);