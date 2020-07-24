def bubble_sort(n_list):
    for i in range(len(n_list)-1, 0, -1):
        for j in range(i):
            if n_list[j] > n_list[j+1]:
                n_list[j], n_list[j+1] = n_list[j+1], n_list[j]

n_list = [14, 46, 43, 27, 57, 41, 45, 21, 70]
bubble_sort(n_list)
print(n_list)