```
import java.util.*;
public class NetworkDelayTime {
    public int networkDelayTime(int[][] times, int n, int k) {
        // Create a graph to represent the network
        Map<Integer, List<int[]>> graph = new HashMap<>();
        for (int[] time : times) {
            graph.computeIfAbsent(time[0], key -> new ArrayList<>()).add(new int[]{time[1], time[2]});
        }

        // Priority queue to store nodes with their distances
        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a -> a[1]));
        pq.offer(new int[]{k, 0});

        // Distance array to store the minimum distance from source to each node
        int[] distance = new int[n + 1];
        Arrays.fill(distance, Integer.MAX_VALUE);
        distance[k] = 0;

        while (!pq.isEmpty()) {
            int[] current = pq.poll();
            int node = current[0];
            int time = current[1];

            if (time > distance[node]) {
                continue;
            }

            if (graph.containsKey(node)) {
                for (int[] edge : graph.get(node)) {
                    int neighbor = edge[0];
                    int newTime = time + edge[1];

                    if (newTime < distance[neighbor]) {
                        distance[neighbor] = newTime;
                        pq.offer(new int[]{neighbor, newTime});
                    }
                }
            }
        }

        int maxTime = Arrays.stream(distance).max().getAsInt();
        
        return maxTime == Integer.MAX_VALUE ? -1 : maxTime;
    }

    public static void main(String[] args) {
        NetworkDelayTime solution = new NetworkDelayTime();

        // Example 1
        int[][] times1 = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
        int n1 = 4;
        int k1 = 2;
        System.out.println(solution.networkDelayTime(times1, n1, k1)); // Output: 2

        // Example 2
        int[][] times2 = {{1, 2, 1}};
        int n2 = 2;
        int k2 = 1;
        System.out.println(solution.networkDelayTime(times2, n2, k2)); // Output: 1

        // Example 3
        int[][] times3 = {{1, 2, 1}};
        int n3 = 2;
        int k3 = 2;
        System.out.println(solution.networkDelayTime(times3, n3, k3)); // Output: -1
    }
}
```
