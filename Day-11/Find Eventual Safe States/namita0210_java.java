public class namita0210_java{
    import java.util.ArrayList;
import java.util.List;

public class EventualSafeStates {
    public List<Integer> eventualSafeNodes(int[][] graph) {
        int n = graph.length;
        int[] color = new int[n];
        List<Integer> result = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            if (dfs(i, graph, color)) {
                result.add(i);
            }
        }

        return result;
    }

    private boolean dfs(int node, int[][] graph, int[] color) {
        if (color[node] > 0) {
            // If the node is visited, return whether it's safe (color[node] == 2)
            return color[node] == 2;
        }

        // Mark the node as currently being visited
        color[node] = 1;

        for (int neighbor : graph[node]) {
            if (!dfs(neighbor, graph, color)) {
                // If any neighbor is not safe, the current node is not safe
                return false;
            }
        }

        // Mark the node as safe and add it to the result list
        color[node] = 2;

        return true;
    }

}

}