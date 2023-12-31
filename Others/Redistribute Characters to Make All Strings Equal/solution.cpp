#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int> mp;
        for(const string & word: words){
           for(char c: word){
               mp[c]++;
           }
        }

        for(auto &count: mp){
            if(count.second%n!=0){
                return false;
            }
        }

        return true;
    }
};
int main() {
    // Example usage:
    vector<string> words = {"abc", "bca", "cab"};
    bool result = makeEqual(words);

    cout << (result ? "true" : "false") << endl;

    return 0;
}