from random import randint

def quicksort(lst, start, end):
	if start < end:
		pivot = randint(start, end)
		lst[end], lst[pivot] = lst[pivot], lst[end]
		split = partition(lst, start, end)
		quicksort(lst, start, split-1)
		quicksort(lst, split+1, end)

def partition(lst, start, end):
	pivot_index = start-1

	for index in range(start, end):
		if lst[index] < lst[end]:
			pivot_index += 1
			lst[pivot_index], lst[index] = lst[index], lst[pivot_index]

	lst[pivot_index+1], lst[end] = lst[end], lst[pivot_index+1]

	return pivot_index+1

nums = [7,2,5,1,29,6,4,19,11]
quicksort(nums, 0, len(nums)-1)
print(nums)