def quickSort(arr, left, right)
	l, r = left, right - 1
	size = right - left

	if size > 1
		pivot = arr[rand(l..r)]

		while l < r
			while arr[r] > pivot && r > l
				r -= 1
			end

			while arr[l] < pivot && l <= r
				l += 1
			end

			if l < r
				arr[l], arr[r] = arr[r], arr[l]
				l += 1
			end
		end
		quickSort(arr, left, l)
		quickSort(arr, r, right)
	end
end			

nums = [3, 2, 1, 5, 8, 6, 9, 4, 7]
quickSort(nums, 0, nums.length)
p nums