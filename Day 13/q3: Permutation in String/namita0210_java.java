import java.util.HashMap;
import java.util.Map;

public class namita0210_java {

    public static boolean checkInclusion(String s1, String s2) {
        int lenS1 = s1.length();
        int lenS2 = s2.length();

        if (lenS1 > lenS2) {
            return false;
        }

        Map<Character, Integer> counterS1 = new HashMap<>();
        Map<Character, Integer> counterS2 = new HashMap<>();

        // Initialize counters for the first window of s2
        for (int i = 0; i < lenS1; i++) {
            counterS1.put(s1.charAt(i), counterS1.getOrDefault(s1.charAt(i), 0) + 1);
            counterS2.put(s2.charAt(i), counterS2.getOrDefault(s2.charAt(i), 0) + 1);
        }

        for (int i = 0; i < lenS2 - lenS1 + 1; i++) {
            if (counterS1.equals(counterS2)) {
                return true;
            }

            // Update counterS2 for the next window
            if (i + lenS1 < lenS2) {
                char removeChar = s2.charAt(i);
                char addChar = s2.charAt(i + lenS1);

                counterS2.put(removeChar, counterS2.get(removeChar) - 1);
                if (counterS2.get(removeChar) == 0) {
                    counterS2.remove(removeChar);
                }

                counterS2.put(addChar, counterS2.getOrDefault(addChar, 0) + 1);
            }
        }

        return false;
    }

    
}
