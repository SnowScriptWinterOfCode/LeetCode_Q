class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

public class namita0210_java {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root == p || root == q) {
            return root;
        }

        TreeNode left = lowestCommonAncestor(root.left, p, q);
        TreeNode right = lowestCommonAncestor(root.right, p, q);

        if (left != null && right != null) {
            // Both nodes are in different subtrees, so the current root is the LCA
            return root;
        } else if (left != null) {
            // Both nodes are in the left subtree
            return left;
        } else {
            // Both nodes are in the right subtree
            return right;
        }
    }

    
}
