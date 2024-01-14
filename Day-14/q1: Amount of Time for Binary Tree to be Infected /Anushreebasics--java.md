```
class Solution {
    public void convert(TreeNode root,int parent, HashMap<Integer,Set<Integer>> hm){
        if(root==null){
            return;
        }
        if(!hm.containsKey(root.val)){
            hm.put(root.val,new HashSet<>());
        }
        Set<Integer> hs=hm.get(root.val);
        if(parent!=0){
            hs.add(parent);
        }
        if(root.left!=null){
            hs.add(root.left.val);
        }
        if(root.right!=null){
            hs.add(root.right.val);
        }
        
        convert(root.left,root.val,hm);
        convert(root.right,root.val,hm);
    }
    public int amountOfTime(TreeNode root, int start) {
        HashMap<Integer,Set<Integer>> hm= new HashMap<>();
        convert(root,0,hm);
        Queue<Integer> q=new LinkedList<>();
        q.add(start);
        int ans=0;
        Set<Integer> visited=new HashSet<>();
        visited.add(start);
        while(q.size()>0){
            int n=q.size();
            for(int i=0;i<n;i++){
                int curr=q.remove();
                Set<Integer> temp=hm.get(curr);
                for(int key: temp){
                    if(!visited.contains(key)){
                        visited.add(key);
                        q.add(key);
                    }
                }
            }
            ans++;
        }
        return ans-1;
    }
}
```
