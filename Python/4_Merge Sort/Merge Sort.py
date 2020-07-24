def merge(left, right):

    result = []
    i, j = 0, 0
    
    while (len(result) < len(left) + len(right)):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
        
        if i == len(left) or j == len(right):
            result.extend(left[i:] or right[j:])
            break
        
    return result

def merge_sort(l):
    if len(l) < 2:
        return l
    
    mid = len(l)//2
    left = merge_sort(l[:mid])
    right = merge_sort(l[mid:])
    
    return merge(left, right)

a = [3,4,5,1,2,8,3,7,6]
print(merge_sort(a))