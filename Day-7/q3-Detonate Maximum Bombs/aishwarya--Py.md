```
from typing import List
import collections

class Solution:
    def maximumDetonation(self, bombs: List[List[int]]) -> int:
        n2nxt = collections.defaultdict(set)
        lb = len(bombs)

        for i in range(lb):  # i is the source
            xi, yi, ri = bombs[i]

            for j in range(lb):
                if i == j:
                    continue

                xj, yj, rj = bombs[j]

                if ri ** 2 >= (xi - xj) ** 2 + (yi - yj) ** 2:  # reachable from i
                    n2nxt[i].add(j)

        def dfs(n, seen):  # return None
            if n in seen:
                return
            seen.add(n)
            for nxt in n2nxt[n]:
                dfs(nxt, seen)

        ans = 0
        for i in range(lb):
            seen = set()
            dfs(i, seen)
            ans = max(ans, len(seen))
        return ans
```