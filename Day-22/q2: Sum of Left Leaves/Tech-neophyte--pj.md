## Python code: Iterative DFS using Stack
```
class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        stack = [root]
        res = 0
        while stack:
            u = stack.pop()
            if u.left:
                stack.append(u.left)
                if not u.left.left and not u.left.right:
                    res += u.left.val
            if u.right:
                stack.append(u.right)
        return res
```
## Java code:
```
class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int sum = 0;
        if (root.left != null && root.left.left == null && root.left.right == null) {
            sum += root.left.val;
        }
        return sumOfLeftLeaves(root.left) + sumOfLeftLeaves(root.right) + sum;
    }
}
```
