```public class MaxConcatenatedStringLength {

    public static int maxLength(List<String> arr) {
        List<Integer> masks = new ArrayList<>();

        for (String s : arr) {
            int mask = 0;
            for (char c : s.toCharArray()) {
                int bit = c - 'a';
                if ((mask & (1 << bit)) > 0) {
                    mask = 0;  // Set mask to 0 if there are duplicate characters
                    break;
                }
                mask |= (1 << bit);
            }
            if (mask > 0) {
                masks.add(mask);
            }
        }

        return backtrack(masks, 0, 0);
    }

    private static int backtrack(List<Integer> masks, int index, int currentMask) {
        int maxLength = Integer.bitCount(currentMask);

        for (int i = index; i < masks.size(); i++) {
            if ((currentMask & masks.get(i)) == 0) {
                maxLength = Math.max(maxLength, backtrack(masks, i + 1, currentMask | masks.get(i)));
            }
        }

        return maxLength;
    }

    
}
```