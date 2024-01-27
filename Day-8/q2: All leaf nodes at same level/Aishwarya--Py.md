```
class Node:
	
	# Constructor to create a new node
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None

# Recursive function which check whether all leaves are at
# same level
def checkUtil(root, level):
	
	# Base Case 
	if root is None:
		return True
	
	# If a tree node is encountered
	if root.left is None and root.right is None:
		
		# When a leaf node is found first time
		if check.leafLevel == 0 :
			check.leafLevel = level # Set first leaf found
			return True

		# If this is not first leaf node, compare its level
		# with first leaf's level
		return level == check.leafLevel 

	# If this is not first leaf node, compare its level
	# with first leaf's level
	return (checkUtil(root.left, level+1)and
			checkUtil(root.right, level+1))

def check(root):
	level = 0
	check.leafLevel = 0
	return (checkUtil(root, level))

# Driver program to test above function
root = Node(12)
root.left = Node(5)
root.left.left = Node(3)
root.left.right = Node(9)
root.left.left.left = Node(1)
root.left.right.left = Node(2)

if(check(root)):
	print "Leaves are at same level"
else:
	print "Leaves are not at same level"




```