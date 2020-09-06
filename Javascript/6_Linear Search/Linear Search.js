function search(array, x) {
    for(var i = 0; i < array.length; i++){
        if(array[i] == x){
            return i;
        }
    }
    return -1;
}

var array = [6, 7, 3, 42, 9];
console.log(search(array, 42));