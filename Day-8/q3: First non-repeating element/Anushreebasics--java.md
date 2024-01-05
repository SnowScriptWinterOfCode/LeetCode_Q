```
import java.util.HashMap;

public class d8q3 {
    public static int func(int arr[]) {

        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            hm.put(arr[i], hm.getOrDefault(arr[i], 0) + 1);
        }
        for (int i = 0; i < arr.length; i++) {
            if (hm.get(arr[i]) == 1) {
                return arr[i];
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        // int[] num={-1, 2, -1, 3, 0};
        int[] num = { 9, 4, 9, 6, 7, 4 };
        System.out.println(func(num));
    }
}
```
