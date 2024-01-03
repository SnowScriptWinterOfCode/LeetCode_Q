string frequencySort(string s) {
        unordered_map<char, int> ans;
     
        string k = "";
        for (int i = 0; i < s.size(); i++) {
            ans[s[i]]++;
        }

        vector<pair<char, int>> final(ans.begin(), ans.end());

        sort(final.begin(), final.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; // Sort in descending order
        });

        for (auto& pair : final) {
            for (int i = 0; i < pair.second; i++) {
                k += pair.first;
            }
        }

        return k;
    }