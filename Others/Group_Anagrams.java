import java.util.*;
public class Group_Anagrams {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>> hm=new HashMap<>();
        for(String s:strs){
            char []arr=s.toCharArray();
            Arrays.sort(arr);
            String sorted=new String(arr);

            if(!hm.containsKey(sorted)){
                hm.put(sorted,new ArrayList<>());
            }
            hm.get(sorted).add(s);
        }
        List<List<String>> res = new ArrayList<>();
        for (String k : hm.keySet()) {
            res.add(hm.get(k));
        }

        return res;
    }
}