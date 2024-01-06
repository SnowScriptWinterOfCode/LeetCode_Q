## Approach 1: range-based loop
1. loop over all the characters of the `typed` string
2. if the characters match, increment the pointer (provided you have not reached the end of the string)
3. if the `typed` string has a character that does not match the current and previous character in the `name` string, return `false`

## C++ Code
```
    bool isLongPressedName(const string& name, const string& typed) {
        int i = 0;
        for (char t : typed) {
            if (i < size(name) && name[i] == t) {
                // We have not reached the end of |name| and the
                //characters match.
                ++i;
            } else if (!(i > 0 && name[i - 1] == t)) {
                // |typed| has a character that's not equal to the
                // current and previous character in |name|.
                return false;
            }
        }
        // Have we matched all characters?
        return i == size(name);
    }
```
## Complexity Analysis

`Time Complexity`: O(size(`typed`))

we loop over all of `typed` string and look at most as many characters in `name` string.

`Space Complexity`: O(1)

as only loop variables are used.


## Approach 2: Two-pointers

1. Set both the pointers to the starting 'char' and run a while loop about the `typed` string length.

2. Make a base case,i.e., if the starting 'char' doesn't match then return false to avoid the runtime error.

3. If both the 'char' of the string match, increment both the pointers and if it doesn't match then it should match the previous 'char', otherwise return false.

4. The true condition will only hold when the first pointer reaches the size of `name` string.



## C++ Code
```
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0 , j = 0 ;
        if(name[0] != typed[0]){
            return false;
        }
        while( j < typed.length() ){
            if(name[i] == typed[j]){
                i++;
                j++;
            }else if (name[i-1] == typed[j] ){
                j++;
            }else{
                return false;
            }
        } 
        if( i == name.length()){
            return true;
        }
        return false;
    }
};
```

## Complexity Analysis
`Time complexity`: O(size(`typed`))

`Space complexity`: O(1)
