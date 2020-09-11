def selectionSort(arr)
	for k in 0...(arr.length - 1)
		min = k
		for j in (k + 1)...arr.length
			min = j if arr[j] < arr[min]
		end
		arr[k], arr[min] = arr[min], arr[k]
	end
end

nums = [3, 2, 1, 5, 8, 6, 9, 4, 7]
selectionSort(nums)
p nums