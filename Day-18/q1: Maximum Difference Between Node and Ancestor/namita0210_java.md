``` public class namita0210_java{
    
    class TreeNode {
        int val;
        TreeNode left, right;

        public TreeNode(int val) {
            this.val = val;
        }
    }

    public class MaxAncestorDiff {
        int maxDiff;

        public int maxAncestorDiff(TreeNode root) {
            maxDiff = 0;
            dfs(root, Integer.MAX_VALUE, Integer.MIN_VALUE);
            return maxDiff;
        }

        private void dfs(TreeNode node, int minAncestor, int maxAncestor) {
            if (node == null) {
                return;
            }

            // Update the maximum ancestor-node difference
            int diff1 = Math.abs(node.val - minAncestor);
            int diff2 = Math.abs(node.val - maxAncestor);
            int currentMaxDiff = Math.max(diff1, diff2);
            maxDiff = Math.max(maxDiff, currentMaxDiff);

            // Update minAncestor and maxAncestor for the next recursion
            minAncestor = Math.min(minAncestor, node.val);
            maxAncestor = Math.max(maxAncestor, node.val);

            // Recursive calls for left and right children
            dfs(node.left, minAncestor, maxAncestor);
            dfs(node.right, minAncestor, maxAncestor);
        }

        
    }

}
```