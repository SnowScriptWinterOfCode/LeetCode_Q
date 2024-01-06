```

import java.util.*;

public class d6q1 {
    public static List<List<Integer>> findMatrix(int[] nums) {
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            hm.put(nums[i], hm.getOrDefault(nums[i], 0) + 1);
        }

        List<List<Integer>> ans = new ArrayList<>();
        while (hm.size() > 0) {
            List<Integer> l = new ArrayList<>();
            Iterator<Map.Entry<Integer, Integer>> iterator = hm.entrySet().iterator();

            while (iterator.hasNext()) {
                Map.Entry<Integer, Integer> entry = iterator.next();
                int key = entry.getKey();

                l.add(key);
                hm.put(key, hm.get(key) - 1);

                if (hm.get(key) == 0) {
                    iterator.remove();
                }
            }

            ans.add(l);
        }

        return ans;
    }

    public static void main(String[] args) {
        //int[] nums = { 1, 3, 4, 1, 2, 3, 1 };
        int[] nums={1,2,3,4};
        List<List<Integer>> ans=findMatrix(nums);
        for(int i=0;i<ans.size();i++){
            System.out.print("[");
            List<Integer> l=ans.get(i);
            for(int j=0;j<l.size();j++){
                System.out.print(l.get(j)+",");
            }
            System.out.print("],");
        }

    }
}

```
