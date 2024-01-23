import java.util.HashMap;
import java.util.Map;

public class namita0210_java {
    public boolean closeStrings(String word1, String word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        Map<Character, Integer> count1 = new HashMap<>();
        Map<Character, Integer> count2 = new HashMap<>();

        // Count occurrences of characters in word1
        for (char ch : word1.toCharArray()) {
            count1.put(ch, count1.getOrDefault(ch, 0) + 1);
        }

        // Count occurrences of characters in word2
        for (char ch : word2.toCharArray()) {
            count2.put(ch, count2.getOrDefault(ch, 0) + 1);
        }

        // Check if the character counts are the same
        return count1.keySet().equals(count2.keySet()) && count1.values().equals(count2.values());
    }

    
}
