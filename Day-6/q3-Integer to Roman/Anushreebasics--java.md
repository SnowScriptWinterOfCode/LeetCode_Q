```

import java.util.*;


public class d6q3 {


    public static class Pair <T,U>{
        public final T k;
        public final U val;
        public Pair(T k,U val){
            this.k=k;
            this.val=val;
        }
        T getKey(){
            return this.k;
        }
        U getValue(){
            return this.val;
        }
        
    }
    public static String func(int num){
        String ans = "";
        List<Pair<Integer,String>> l= new ArrayList<>();
        l.add(new Pair(1000, "M"));
        l.add(new Pair(900, "CM"));
        l.add(new Pair(500, "D"));
        l.add(new Pair(400, "CD"));
        l.add(new Pair(100, "C"));
        l.add(new Pair(90, "XC"));
        l.add(new Pair(50, "L"));
        l.add(new Pair(40, "XL"));
        l.add(new Pair(10, "X"));
        l.add(new Pair(9, "IX"));
        l.add(new Pair(5, "V"));
        l.add(new Pair(4, "IV"));
        l.add(new Pair(1, "I"));
        
        for (int i = 0; i < l.size(); i++) {
            while (num >= l.get(i).getKey()) {
                ans += l.get(i).getValue();
                num -= l.get(i).getKey();
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        //int num=3;
        int num=58;
        System.out.println(func(num));
    }
}

```
