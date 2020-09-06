"use strict";

function binarySearch(array, l, r, x) {
  if (r >= l) {
    var mid = l + Math.floor((r - l) / 2);

    if (array[mid] == x) {
      return mid;
    } else if (array[mid] > x) {
      return binarySearch(array, l, mid - 1, x);
    } else {
      return binarySearch(array, mid + 1, r, x);
    }
  }

  return -1;
}

var array = [2, 3, 4, 10, 40];
var x = 10;
console.log(binarySearch(array, 0, array.length - 1, x));