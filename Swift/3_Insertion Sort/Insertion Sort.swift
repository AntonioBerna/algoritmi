func insertionSort(arr: [Int]) -> [Int] {
    var array = arr
    for k in 1..<array.count {
		var j = k
		while j > 0 && array[j-1] > array[j] {
			let temp = array[j]
			array[j] = array[j-1]
			array[j-1] = temp
			j -= 1
		}
	}
    return array
}

let unsortedArray = [14, 46, 43, 27, 57, 41, 45, 21, 70]
print(insertionSort(arr: unsortedArray))