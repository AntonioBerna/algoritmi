func quickSort(arrayToSort: [Int]) -> [Int] {
    if arrayToSort.count == 1 {
        return arrayToSort
    }    

    let pivotIndex:Int = arrayToSort.count - 1
    var leftArray:[Int] = []
    var rightArray:[Int] = []

    for i in 0..<pivotIndex {
        if arrayToSort[i] < arrayToSort[pivotIndex] {
            leftArray.append(arrayToSort[i])
        }else if arrayToSort[i] > arrayToSort[pivotIndex] {
            rightArray.append(arrayToSort[i])
        }
    }

    var leftSortedArray: [Int]

    if leftArray.count > 1 {
        leftSortedArray = quickSort(arrayToSort: leftArray)
    }else {
        leftSortedArray = leftArray
    }

    var rightSortedArray: [Int]
    if rightArray.count > 1 {
        rightSortedArray = quickSort(arrayToSort: rightArray)
    }else {
        rightSortedArray = rightArray
    }

    let resultArray = concatenateArrays(leftSortedArray: leftSortedArray, rightSortedArray: rightSortedArray, pivotElement: arrayToSort[pivotIndex])
    return resultArray

}

func concatenateArrays(leftSortedArray: [Int],  rightSortedArray: [Int], pivotElement: Int) -> [Int] {

    var resultArray: [Int] = []
    for n in leftSortedArray {
        resultArray.append(n)
    }

    resultArray.append(pivotElement)
    for k in rightSortedArray {
        resultArray.append(k)
    }
    return resultArray
}

let arrayToSort = [10, 22, 50, 9, 33, 41, 21, 40, 80, 60, 26]
print(quickSort(arrayToSort: arrayToSort))