def insertion_sort(arr):
    for k in range(1, len(arr)):
        j = k
        while j > 0 and arr[j-1] > arr[j]:
            arr[j], arr[j-1] = arr[j-1], arr[j]
            j = j - 1

arr = [12, 11, 13, 5, 6]
insertion_sort(arr)
print(arr)