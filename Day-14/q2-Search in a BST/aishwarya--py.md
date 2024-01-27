```
stack, subtree = [], None
while True:
	while root:
		if root.val == val: subtree = root
		stack.append(root)
		root = root.left

	if subtree: return subtree
	
	if not stack: return None

	root = stack.pop().right
```