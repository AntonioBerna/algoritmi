func linearSearch(arr: [Int], x: Int) -> Int {
	var array = arr
	for i in 0..<array.count {
		if array[i] == x {
			return i
		}
	}
	return -1
}

var array = [6, 7, 3, 42, 9]
print(linearSearch(arr: array, x: 42))