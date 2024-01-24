import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class namita0210_java {

    public static List<List<Integer>> findPlayers(int[][] matches) {
        Map<Integer, Integer> losses = new HashMap<>();
        Map<Integer, Boolean> played = new HashMap<>();

        for (int[] match : matches) {
            int winner = match[0];
            int loser = match[1];

            played.put(winner, true);
            played.put(loser, true);

            losses.put(loser, losses.getOrDefault(loser, 0) + 1);
        }

        List<Integer> zeroLossPlayers = new ArrayList<>();
        List<Integer> oneLossPlayers = new ArrayList<>();

        for (int player : played.keySet()) {
            int lossCount = losses.getOrDefault(player, 0);

            if (lossCount == 0) {
                zeroLossPlayers.add(player);
            } else if (lossCount == 1) {
                oneLossPlayers.add(player);
            }
        }

        List<List<Integer>> answer = new ArrayList<>();
        answer.add(zeroLossPlayers);
        answer.add(oneLossPlayers);

        return answer;
    }

    
}
