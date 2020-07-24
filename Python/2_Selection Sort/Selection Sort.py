def selection_sort(arr):
    for k in range(len(arr)):
        min_index = k
        for j in range(k+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        
        arr[k], arr[min_index] = arr[min_index], arr[k]

arr = [64, 25, 12, 22, 11]
selection_sort(arr)
print(arr)