class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_set<int> set;
        int n = fronts.size();

        for (int i = 0; i < n; i++) {
            if (fronts[i] == backs[i]) {
                set.insert(fronts[i]);
            }
        }

        int min_val = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (set.find(backs[i]) == set.end()) {
                min_val = std::min(min_val, backs[i]);
            }
            if (set.find(fronts[i]) == set.end()) {
                min_val = std::min(min_val, fronts[i]);
            }
        }

        return (min_val == INT_MAX) ? 0 : min_val;
    }
};
