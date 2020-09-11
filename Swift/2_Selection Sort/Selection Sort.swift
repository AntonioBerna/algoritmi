func selectionSort(arr: [Int]) -> [Int] {
    var array = arr
    for k in 0..<array.count {
        var min_index = k
        for j in k+1..<array.count {
            if array[j] < array[min_index] {
                min_index = j
            }
        }
        
        let temp = array[k]
	array[k] = array[min_index]
	array[min_index] = temp
    }
    return array
}

let unsortedArray = [14, 46, 43, 27, 57, 41, 45, 21, 70]
print(selectionSort(arr: unsortedArray))
