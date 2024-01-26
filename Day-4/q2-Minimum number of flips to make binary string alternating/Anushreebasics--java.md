```
class Solution {
    public int minFlips(String s) {
        
        String t = s + s;
        
        
        int left = 0; 
        int diff1 = 0; 
        int diff2 = 0; 
        int min = Integer.MAX_VALUE; 
        
        
        for (int right = 0; right < t.length(); right++) {
            char rightChar = t.charAt(right);
            
            
            if ((right % 2 == 0 && rightChar != '0') || (right % 2 != 0 && rightChar != '1')) {
                diff1++; 
            }

            
            if ((right % 2 == 0 && rightChar != '1') || (right % 2 != 0 && rightChar != '0')) {
                diff2++; 
            }

            
            if (right - left + 1 >= s.length()) {
                
                min = Integer.min(min, Math.min(diff1, diff2));
                
                
                char leftChar = t.charAt(left);
                if ((left % 2 == 0 && leftChar != '0') || (left % 2 != 0 && leftChar != '1')) {
                    diff1--;
                }
                if ((left % 2 == 0 && leftChar != '1') || (left % 2 != 0 && leftChar != '0')) {
                    diff2--;
                }
                left++; 
            }
        }
        
        return min; 
    }
}
```
