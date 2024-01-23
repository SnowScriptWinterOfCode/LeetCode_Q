```
import java.util.*;
class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        HashMap<Integer,Integer> played= new HashMap<>();
        HashMap<Integer,Integer> won= new HashMap<>();
        
        for(int i=0;i<matches.length;i++){
            int win=matches[i][0];
            int los=matches[i][1];
            played.put(win,played.getOrDefault(win,0)+1);
            played.put(los,played.getOrDefault(los,0)+1);
            won.put(win,won.getOrDefault(win,0)+1);
            
        }

        List<Integer> l1=new ArrayList<>();
        List<Integer> l2=new ArrayList<>();
        for(int k:played.keySet()){
            if(won.containsKey(k) && played.get(k)==won.get(k)){
                l1.add(k);
            }
            else if((!won.containsKey(k) && (played.get(k)==1)) || (won.containsKey(k) && (played.get(k)-won.get(k))==1)){
                l2.add(k);
            }
        }
        Collections.sort(l1);
        Collections.sort(l2);
        List<List<Integer>> l= new ArrayList<>();
        l.add(l1);
        l.add(l2);
        return l;
    }
}
```
