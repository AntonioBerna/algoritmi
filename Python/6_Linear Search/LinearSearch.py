def search(x, my_list):
	for i in range(len(my_list)):
		if my_list[i] == x:
			return i

	return -1

nums = [6, 7, 3, 42, 9]
print(search(42, nums))