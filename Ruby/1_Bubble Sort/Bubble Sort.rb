def bubbleSort(arr)
	swapped = true
	for i in 0...(arr.length - 1)
		swapped = false
		for j in 0...(arr.length - i - 1)
			if arr[j] > arr[j+1]
				arr[j], arr[j+1] = arr[j+1], arr[j]
				swapped = true
			end
		end
		break if swapped == false
	end
end

nums = [3, 2, 1, 5, 21, 8, 6, 9, 4, 7]
bubbleSort(nums)
p nums