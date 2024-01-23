## Find Players With Zero or One Losses

### Approach:

1. Initialize an unordered map `lost` to keep track of the number of matches lost by each player.
2. Iterate through the given `matches` array to populate the `lost` map.
3. Create 2D vector in which `answer[0]` and `answer[1]` store players who have not lost any matches and those who have lost exactly one match, respectively.
4. Iterate through the `matches` array again:
   - For each match, check if the loser (`matches[i][1]`) has lost exactly one match. If so, add them to `answer[1]`.
   - Check if the winner (`matches[i][0]`) is not present in the `lost` map, which means they have not lost any matches. Add them to `answer[0]` and mark their status in the `lost` map as -1.
5. Sort both `answer[0]` and `answer[1]` in increasing order.
6. Return the `answer` vector containing the two lists.



### C++ code
```cpp
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> answer(2);
        unordered_map<int, int> lost;

        // Populate the 'lost' map
        for (int i = 0; i < matches.size(); i++) {
            lost[matches[i][1]]++;
        }

        // Process the matches
        for (int i = 0; i < matches.size(); i++) {
            // Check for players who lost exactly one match
            if (lost[matches[i][1]] == 1) {
                answer[1].push_back(matches[i][1]);
            }

            // Check for players who have not lost any matches
            if (lost.find(matches[i][0]) == lost.end()) {
                answer[0].push_back(matches[i][0]);
                lost[matches[i][0]] = -1;
            }
        }

        // Sort the result vectors in increasing order
        sort(begin(answer[0]), end(answer[0]));
        sort(begin(answer[1]), end(answer[1]));

        return answer;
    }
};
```
