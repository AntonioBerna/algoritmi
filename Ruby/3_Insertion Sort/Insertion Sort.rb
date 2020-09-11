def insertionSort(arr)
	for i in 1...arr.length
		j = i
		while j > 0 && arr[j-1] > arr[j]
			arr[j], arr[j-1] = arr[j-1], arr[j]
			j -= 1
		end
	end
end

nums = [3, 2, 1, 5, 8, 6, 9, 4, 7]
insertionSort(nums)
p nums