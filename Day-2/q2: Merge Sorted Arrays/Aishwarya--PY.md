```
class Solution(object):
    def merge(self, n1, m, n2, n):
      for j in range(n):
          n1[m+j] = n2[j]
      n1.sort()
```