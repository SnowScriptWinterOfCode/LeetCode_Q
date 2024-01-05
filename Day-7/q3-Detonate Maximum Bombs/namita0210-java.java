public class MaximumDetonatedBombs {
    public static int maxDetonatedBombs(int[][] bombs) {
        int maxDetonated = 0;

        for (int[] bomb : bombs) {
            int x = bomb[0], y = bomb[1], r = bomb[2];
            int detonated = 0;

            for (int[] other : bombs) {
                int ox = other[0], oy = other[1];
                int distance = (x - ox) * (x - ox) + (y - oy) * (y - oy);
                if (distance <= r * r) {
                    detonated++;
                }
            }

            maxDetonated = Math.max(maxDetonated, detonated);
        }

        return maxDetonated;
    }

}
