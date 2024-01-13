# Approach:
<br />1. Convert the tree to an undirected graph. (adjacency list)
<br />2. Use BFS to calculate distance from start to each node.
<br />3. Return maximum distance.
# Python code:
```
class Solution:
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        graph = self.tree_to_adjacency_list (root)
        size = len(graph)
        
        distance = {}
        to_visit = deque()
        to_visit.append(start)
        infected = set()
        infected.add(start)
        distance[start] = 0
 
        while to_visit:
            node_val = to_visit.popleft()
            
            neighbors = graph[node_val]
            for nv in neighbors:
                if nv not in infected:
                    infected.add (nv)
                    distance[nv] = distance[node_val] + 1
                    to_visit.append (nv)
        
        return max (distance.values())
        
    def tree_to_adjacency_list (self, root):
        graph = {}
        
        if root is None:
            return graph
        
        stack = []
        stack.append(root)
        while stack:
            node = stack.pop()
            edges = None
            if node.val in graph:
                edges = graph[node.val]
            else:
                edges = []
                graph[node.val] = edges
                
            if node.left is not None:
                left = node.left
                edges.append(left.val)
                graph[left.val] = [node.val]
                
                stack.append(left)
            if node.right is not None:
                right = node.right
                edges.append(right.val)
                graph[right.val] = [node.val]
                
                stack.append(right)
                
        return graph
```
