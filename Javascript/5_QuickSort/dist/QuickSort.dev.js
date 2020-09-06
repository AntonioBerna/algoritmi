"use strict";

function quickSort(array, start, end) {
  if (start < end) {
    var pivot = Math.floor(Math.random() * (Math.floor(end) - Math.ceil(start))) + Math.ceil(start);
    var temp = array[end];
    array[end] = array[pivot];
    array[pivot] = temp;
    var split = partition(array, start, end);
    quickSort(array, start, split - 1);
    quickSort(array, split + 1, end);
  }
}

function partition(array, start, end) {
  var pivot_index = start - 1;

  for (var index = start; index < end; index++) {
    if (array[index] < array[end]) {
      pivot_index++;
      var temp_1 = array[pivot_index];
      array[pivot_index] = array[index];
      array[index] = temp_1;
    }
  }

  var temp_2 = array[pivot_index + 1];
  array[pivot_index + 1] = array[end];
  array[end] = temp_2;
  return pivot_index + 1;
}

var array = [7, 2, 5, 1, 29, 6, 4, 19, 11];
quickSort(array, 0, array.length - 1);
console.log(array);