def binarySearch(arr, l, r, x)
	if l <= r
		mid = (l + r) / 2
		if arr[mid] > x 
			binarySearch(arr, l, mid - 1, x)
		elsif arr[mid] < x
			binarySearch(arr, mid + 1, r, x)
		else
			return mid
		end
	end
end

nums = [18, 27, 36, 45, 59]
puts binarySearch(nums, 0, nums.length - 1, 59)