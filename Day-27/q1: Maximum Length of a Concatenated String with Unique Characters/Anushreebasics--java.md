```
class Solution {
    public boolean comp(String a, String b){
        Set<Character> hs=new HashSet<>();
        for(int i=0;i<a.length();i++){
            if(hs.contains(a.charAt(i))){
                return false;
            }
            hs.add(a.charAt(i));
        }
        for(int i=0;i<b.length();i++){
            if(hs.contains(b.charAt(i))){
                return false;
            }
        }
        return true;
    }
    public List<String> helper(List<String> arr, int id){
        if(id==arr.size()){
            List<String> ans=new ArrayList<>();
            ans.add("");
            return ans;
        }
        List<String> temp=helper(arr,id+1);
        List<String> fin=new ArrayList<>();
        for(int i=0;i<temp.size();i++){
            String s=temp.get(i);
            fin.add(s);
            if(comp(arr.get(id),s)){
                fin.add(arr.get(id)+s);
            }
        }
        return fin;
    }
    public int maxLength(List<String> arr) {
        if(arr.size()==1){
            if(comp(arr.get(0),"")){
                return arr.get(0).length();
            }
            return 0;
        }
        List<String> ans=helper(arr,0);
        int res=0;
        for(int i=0;i<ans.size();i++){
            int key=ans.get(i).length();
            res=Math.max(res,key);
        }
        return res;
    }
}
```
