def merge(arr, l, m, r)
	n1, n2 = m - l + 1, r - m
	left = arr.slice(l, n1)
	right = arr.slice(m + 1, n2)
	i, j, k = 0, 0, l

	while i < n1 && j < n2
		if left[i] <= right[j]
			arr[k] = left[i]
			i += 1
		else
			arr[k] = right[j]
			j += 1
		end
		k += 1
	end

	while i < n1
		arr[k] = left[i]
		i += 1
		k += 1
	end

	while j < n2
		arr[k] = right[j]
		j += 1
		k += 1
	end
end

def mergeSort(arr, l, r)
	if l < r
		m = (l + r) / 2
		mergeSort(arr, l, m)
		mergeSort(arr, m + 1, r)
		merge(arr, l, m, r)
	end
end

nums = [3, 2, 1, 5, 8, 6, 9, 4, 7]
mergeSort(nums, 0, nums.length - 1)
p nums