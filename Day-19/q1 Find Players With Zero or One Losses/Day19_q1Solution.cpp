#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findPlayers(vector<vector<int>>& matches) {
        // Dictionary to store the number of losses for each player
        unordered_map<int, int> lossesCount;

        // Count the number of losses for each player
        for (const auto& match : matches) {
            lossesCount[match[1]]++;
        }

        // Vectors to store players with zero and one losses
        vector<int> zeroLosses;
        vector<int> oneLoss;

        // Separate players into zero and one losses categories
        for (const auto& entry : lossesCount) {
            if (entry.second == 0) {
                zeroLosses.push_back(entry.first);
            } else if (entry.second == 1) {
                oneLoss.push_back(entry.first);
            }
        }

        // Sort the lists in increasing order
        sort(zeroLosses.begin(), zeroLosses.end());
        sort(oneLoss.begin(), oneLoss.end());

        // Return the result in the required format
        return {zeroLosses, oneLoss};
    }
};
