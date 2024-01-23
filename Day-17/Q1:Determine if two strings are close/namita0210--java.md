import java.util.HashMap;
import java.util.Map;

public class CloseStrings {
    public boolean closeStrings(String word1, String word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        // Frequency maps for both words
        Map<Character, Integer> freqMap1 = new HashMap<>();
        Map<Character, Integer> freqMap2 = new HashMap<>();

        // Populate frequency map for word1
        for (char c : word1.toCharArray()) {
            freqMap1.put(c, freqMap1.getOrDefault(c, 0) + 1);
        }

        // Populate frequency map for word2
        for (char c : word2.toCharArray()) {
            freqMap2.put(c, freqMap2.getOrDefault(c, 0) + 1);
        }

        // Check if the sets of characters are the same
        if (!freqMap1.keySet().equals(freqMap2.keySet())) {
            return false;
        }

        // Check if the counts of character occurrences are the same
        int[] count1 = freqMap1.values().stream().mapToInt(Integer::intValue).toArray();
        int[] count2 = freqMap2.values().stream().mapToInt(Integer::intValue).toArray();

        // Sort the counts arrays
        Arrays.sort(count1);
        Arrays.sort(count2);

        // Check if the sorted counts arrays are the same
        return Arrays.equals(count1, count2);
    }

    
}
