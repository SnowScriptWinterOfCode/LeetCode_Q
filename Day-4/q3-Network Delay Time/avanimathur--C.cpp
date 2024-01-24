#include <bits/stdc++.h>
using namespace std;

//Dijkstra's algorithm

class Solution {
public:

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int, int>>> graph(n + 1);

        for (const auto& time : times) {

            int u = time[0];
            int v = time[1];
            int w = time[2];
            graph[u].push_back({v, w});
            
        }

        vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});

        while (!pq.empty()) {
            int u = pq.top().second;
            int u_dist = pq.top().first;
            pq.pop();

            if (u_dist > dist[u]) continue;

            for (const auto& neighbor : graph[u]) {
                int v = neighbor.first;
                int w = neighbor.second;

                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        int maxDist = *max_element(dist.begin() + 1, dist.end());

        return (maxDist == INT_MAX) ? -1 : maxDist;
    }
}