func bubbleSort(arr: [Int]) -> [Int]{
	var array = arr
	for _ in 0..<array.count - 1 {
		for j in 0..<array.count - 1 {
			if array[j] > array[j+1] {
				let temp = array[j]
				array[j] = array[j+1]
				array[j+1] = temp
			}
		}
	}
	return array
}

let unsortedArray = [14, 46, 43, 27, 57, 41, 45, 21, 70]
print(bubbleSort(arr: unsortedArray))