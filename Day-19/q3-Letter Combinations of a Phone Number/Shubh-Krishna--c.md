```
 	vector<string> res;
 	string key[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
 public:
 	vector<string> letterCombinations(string digits) {
 		if(digits.empty()) return res_;
 		recur(digits, "", 0);
 		return res;
 	}
 	void recur(string s, string cur, int index){
 		if(index == s.length()) res_.emplace_back(cur);
 		else{
 			string letters = key[s[index] - '0'];
 			for(const char c: letters){
 				recur(s, cur + c, index + 1);
 			}
 		}
 	}
```
