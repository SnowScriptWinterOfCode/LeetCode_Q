## Approach:
<br />1. Get the freq of each unique character in word1 and word2.
<br />2. Check if all the char present in word1 are present in word2. ( word2 has no unique char).
<br />3. Sort the frequencies and check if the sorted frequencies match.
## C++ code:
```
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }
        std::unordered_map<char, int> freq1;
        for (char c : word1) {
            freq1[c]++;
        }
        std::unordered_map<char, int> freq2;
        for (char c : word2) {
            freq2[c]++;
        }
        for (char c : word1) {
            if (freq2.find(c) == freq2.end()) {
                return false;
            }
        }
        std::vector<int> freqVec1, freqVec2;
        for (const auto& pair : freq1) {
            freqVec1.push_back(pair.second);
        }

        for (const auto& pair : freq2) {
            freqVec2.push_back(pair.second);
        }

        std::sort(freqVec1.begin(), freqVec1.end());
        std::sort(freqVec2.begin(), freqVec2.end());
        return freqVec1 == freqVec2;
    }
};
```
