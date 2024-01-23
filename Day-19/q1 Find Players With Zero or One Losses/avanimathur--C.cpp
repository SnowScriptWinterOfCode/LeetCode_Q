#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findPlayers(vector<vector<int>>& matches) {
        
        unordered_map<int, int> lossesCount;
        
        for (const auto& match : matches) {
            lossesCount[match[1]]++;
        }

        vector<int> zeroLosses;
        vector<int> oneLoss;

        for (const auto& entry : lossesCount) {
            if (entry.second == 0) {
                zeroLosses.push_back(entry.first);
            } else if (entry.second == 1) {
                oneLoss.push_back(entry.first);
            }
        }

        sort(zeroLosses.begin(), zeroLosses.end());
        sort(oneLoss.begin(), oneLoss.end());

        return {zeroLosses, oneLoss};
    }
};
