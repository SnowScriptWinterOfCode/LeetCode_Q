```

import java.util.*;

public class d5q2 {
    public static String sort(String str){
        char[] temp=str.toCharArray();
        Arrays.sort(temp);
        return new String(temp);
    }
    public static List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>> hm=new HashMap<>();
        for(int i=0;i<strs.length;i++){
            List<String> l;
            String temp=sort(strs[i]);
            if(hm.containsKey(temp)){
                l=hm.get(temp);
            
            }
            else{
                l=new ArrayList<>();
            }
            l.add(strs[i]);
            hm.put(temp,l);
        } 
        List<List<String>> ans=new ArrayList<>();
        for(String st: hm.keySet()){
            ans.add(hm.get(st));
        }       
        return ans;
    }
    public static void main(String[] args) {
        //String[] arr={"eat","tea","tan","ate","nat","bat"};
        //String[] arr={""};
        String[] arr={"a"};
        List<List<String>> ans=groupAnagrams(arr);
        System.out.print("[");
        for(int i=0;i<ans.size();i++){
            System.out.print("[");
            List<String> l=ans.get(i);
            for(String s: l){
                System.out.print(s+",");
            }
            System.out.print("],");
        }
        System.out.print("]");
    }
}

```
