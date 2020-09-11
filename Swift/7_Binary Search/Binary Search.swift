func binarySearch(arr: [Int], value: Int) -> Int? {
    var array = arr
	var left = 0
    var right = array.count - 1

    while left <= right {

        let middle = Int(Double(left + right) / 2.0)

        if array[middle] < value {
            left = middle + 1
        } else if array[middle] > value {
            right = middle - 1
        } else {
            return middle
        }
    }
    return nil
}

let array = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
let x = 13

if let index = binarySearch(arr: array, value: x) {
    print("Found \(x) at index \(index)")
} else {
    print("Did not find \(x)")
}