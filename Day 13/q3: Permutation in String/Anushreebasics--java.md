```
import java.util.Arrays;

public class d13q3 {
    public static boolean eq(String str1, String str2) {
        char[] a = str1.toCharArray();
        char[] b = str2.toCharArray();
        Arrays.sort(a);
        Arrays.sort(b);
        String s = new String(a);
        String p = new String(b);
        return s.equals(p);
    }

    public static boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        String temp = s2.substring(0, s1.length());
        if (eq(s1, temp)) {
            return true;
        }
        int j = s1.length();
        while (j < s2.length()) {
            temp = temp.substring(1);
            temp += s2.charAt(j);
            if (eq(s1, temp)) {
                return true;
            }
            j++;
        }
        return false;
    }

    public static void main(String[] args) {
        System.out.println(checkInclusion("ab","eidbaooo"));
        System.out.println(checkInclusion("ab","eidboaoo"));
    }
}

```
