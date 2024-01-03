import java.util.*;

class Solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        int n=nums.length;
        List<List<Integer>> res= new ArrayList<>();
        HashMap<Integer,Integer>hm=new HashMap<>();
        for(int i:nums){
            hm.put(i,hm.getOrDefault(i,0)+1);
        }
        int r=0;

        for(int i=0;i<r;i++){
            HashSet<Integer> set=new HashSet<>();
            ArrayList<Integer> temp=new ArrayList<>();
            for(int k=0;k<n;k++){
                int j=nums[k];
                if(hm.get(j)>0 && (!set.contains(j))){
                    set.add(j);
                    temp.add(j);
                    hm.put(j,hm.get(j)-1);
                }
            }
            res.add(temp);
        }
        return res;
    }
}