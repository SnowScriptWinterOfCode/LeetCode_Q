import java.util.Stack;

public class ScoreOfParentheses {
    public static int scoreOfParentheses(String s) {
        Stack<Integer> stack = new Stack<>();
        int score = 0;

        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                stack.push(score);
                score = 0;
            } else {
                score = stack.pop() + Math.max(2 * score, 1);
            }
        }

        return score;
    }

    public static void main(String[] args) {
        System.out.println(scoreOfParentheses("()"));    // Output: 1
        System.out.println(scoreOfParentheses("(())"));  // Output: 2
        System.out.println(scoreOfParentheses("()()"));  // Output: 2
    }
}
