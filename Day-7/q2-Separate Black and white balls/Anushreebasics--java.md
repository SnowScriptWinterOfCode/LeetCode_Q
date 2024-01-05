```
public class d7q2 {
    public static long func(String s) {

        int i = -1;
        long ans = 0;
        for (int k = 0; k < s.length(); k++) {
            if (s.charAt(k) == '1') {
                i = k;
                break;
            }
        }
        if (i == -1) {
            return 0;
        }
        int j = i + 1;
        while (j < s.length()) {
            if (s.charAt(j) == '0') {
                ans += j - i;
                i++;

            }
            j++;
        }
        return ans;
    }
    public static void main(String[] args) {
        //String s="101";
        String s="100";
        System.out.println(func(s));
    }
}

```
