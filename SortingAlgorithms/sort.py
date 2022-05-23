class Algorithms:
    def swap(self, A, i, j):
        if i != j:
            A[i], A[j] = A[j], A[i]

    def bubblesort(self, A):
        if len(A) == 1:
            return

        swapped = True
        for i in range(len(A) - 1):
            if not swapped:
                break
            swapped = False
            for j in range(len(A) - 1 - i):
                if A[j] > A[j + 1]:
                    self.swap(A, j, j + 1)
                    swapped = True
                yield A

    def insertionsort(self, A):
        for i in range(1, len(A)):
            j = i
            while j > 0 and A[j] < A[j - 1]:
                self.swap(A, j, j - 1)
                j -= 1
                yield A

    def mergesort(self, A, start, end):
        if end <= start:
            return

        mid = start + ((end - start + 1) // 2) - 1
        yield from self.mergesort(A, start, mid)
        yield from self.mergesort(A, mid + 1, end)
        yield from self.merge(A, start, mid, end)
        yield A

    def merge(self, A, start, mid, end):        
        merged = []
        leftIdx = start
        rightIdx = mid + 1

        while leftIdx <= mid and rightIdx <= end:
            if A[leftIdx] < A[rightIdx]:
                merged.append(A[leftIdx])
                leftIdx += 1
            else:
                merged.append(A[rightIdx])
                rightIdx += 1

        while leftIdx <= mid:
            merged.append(A[leftIdx])
            leftIdx += 1

        while rightIdx <= end:
            merged.append(A[rightIdx])
            rightIdx += 1

        for i, sorted_val in enumerate(merged):
            A[start + i] = sorted_val
            yield A

    def quicksort(self, A, start, end):
        if start >= end:
            return

        pivot = A[end]
        pivotIdx = start

        for i in range(start, end):
            if A[i] < pivot:
                self.swap(A, i, pivotIdx)
                pivotIdx += 1
            yield A
        self.swap(A, end, pivotIdx)
        yield A

        yield from self.quicksort(A, start, pivotIdx - 1)
        yield from self.quicksort(A, pivotIdx + 1, end)


    def selectionsort(self, A):
        if len(A) == 1:
            return

        for i in range(len(A)):
            # Find minimum unsorted value.
            minVal = A[i]
            minIdx = i
            for j in range(i, len(A)):
                if A[j] < minVal:
                    minVal = A[j]
                    minIdx = j
                yield A
            self.swap(A, i, minIdx)
            yield A