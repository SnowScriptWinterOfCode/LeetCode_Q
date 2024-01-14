```
class Solution {
    public TreeNode searchBST(TreeNode root, int val) {
        if(root==null){
            return null;
        }
        TreeNode l=searchBST(root.left,val);
        TreeNode r=searchBST(root.right,val);
        if(l!=null && l.val==val){
            return l;
        }
        if(r!=null && r.val==val){
            return r;
        }
        if(root.val==val){
            return root;
        }
        return null;
    }
}
```
