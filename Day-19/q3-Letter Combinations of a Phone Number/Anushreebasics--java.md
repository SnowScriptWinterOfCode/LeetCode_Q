```
class Solution {
    public List<String> helper(HashMap<Integer, String> hm, String digits, int id) {
        if (id >= digits.length()) {
            return new ArrayList<>();
        }

        if (id == digits.length() - 1) {
            List<String> temp = new ArrayList<>();
            String t = hm.get(digits.charAt(id) - '0');
            for (int i = 0; i < t.length(); i++) {
                temp.add(t.charAt(i) + "");
            }
            return temp;
        }

        List<String> temp = helper(hm, digits, id + 1);
        String t = hm.get(digits.charAt(id) - '0');
        List<String> fin = new ArrayList<>();
        for (int i = 0; i < t.length(); i++) {
            char ch = t.charAt(i);
            for (String s : temp) {
                fin.add(ch + s);
            }
        }
        return fin;
    }

    public List<String> letterCombinations(String digits) {
        if (digits == null || digits.isEmpty()) {
            return new ArrayList<>();
        }

        HashMap<Integer, String> hm = new HashMap<>();
        hm.put(2, "abc");
        hm.put(3, "def");
        hm.put(4, "ghi");
        hm.put(5, "jkl");
        hm.put(6, "mno");
        hm.put(7, "pqrs");
        hm.put(8, "tuv");
        hm.put(9, "wxyz");
        return helper(hm, digits, 0);
    }
}

```
