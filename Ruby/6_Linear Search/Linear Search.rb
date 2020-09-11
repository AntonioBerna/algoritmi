def linearSearch(arr, x)
	arr.each_with_index do |value, index|
		return index if value == x
	end
end

nums = [18, 27, 36, 45, 59]
puts linearSearch(nums, 59)