
public class Solution {

    public static int maxDetonatedBombs(int[][] bombs) {
        int maxDetonated = 0;

        for (int[] bomb : bombs) {
            int x = bomb[0];
            int y = bomb[1];
            int r = bomb[2];
            int count = 0;

            for (int[] otherBomb : bombs) {
                int xo = otherBomb[0];
                int yo = otherBomb[1];
                int ro = otherBomb[2];
                int distance = (x - xo) * (x - xo) + (y - yo) * (y - yo);

                if (distance <= r * r) {
                    count++;
                }
            }

            maxDetonated = Math.max(maxDetonated, count);
        }

        return maxDetonated;
    }
}    