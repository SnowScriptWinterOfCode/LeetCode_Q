## Approach 1
Using binary search: for an mxn 2D matrix, we can use binary search as if it was a 1D array. So, an element at the 2nd row and 3rd column will have an index of 2 * n + 3 in the linear array.
Similarly, if we want to convert an index i to the index of an mxn matrix, the row will be i / n, and the column will be i % n.

### Python3 Code 

```
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix), len(matrix[0])
        left, right = 0, m * n - 1
        while left <= right:
            mid = (left + right) // 2
            num = matrix[mid // n][mid % n]
            if num == target: return True
            elif num > target: right = mid - 1
            else: left = mid + 1
        return False
```

## Approach 2
Basically the same approach but with inbuilt functions.

### Python3 Code

```
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:       
        first_elements = [matrix[i][0] for i in range(len(matrix))]
        row = bisect.bisect(first_elements, target) - 1
        col = bisect.bisect(matrix[row], target) - 1
        return matrix[row][col] == target
```
