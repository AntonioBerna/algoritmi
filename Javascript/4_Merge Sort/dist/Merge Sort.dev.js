"use strict";

function merge(left, right) {
  var result = [],
      i = 0,
      j = 0;

  while (i < left.length && j < right.length) {
    if (left[i] < right[j]) {
      result.push(left[i]);
      i++;
    } else {
      result.push(right[j]);
      j++;
    }
  }

  return result.concat(left.slice(i)).concat(right.slice(j));
}

function mergeSort(array) {
  if (array.length < 2) {
    return array;
  }

  var mid = Math.floor(array.length / 2);
  var left = mergeSort(array.slice(0, mid));
  var right = mergeSort(array.slice(mid));
  return merge(mergeSort(left), mergeSort(right));
}

array = [3, 4, 5, 1, 2, 8, 3, 7, 6];
console.log(mergeSort(array));