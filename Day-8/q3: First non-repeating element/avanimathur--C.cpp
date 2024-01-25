#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int firstNonRepeatingElement(const vector<int>& arr) {
        unordered_map<int, int> frequency;

        for (int num : arr) {
            frequency[num]++;
        }

        for (int num : arr) {
            if (frequency[num] == 1) {
                return num;
            }
        }

        return -1;
    }

};