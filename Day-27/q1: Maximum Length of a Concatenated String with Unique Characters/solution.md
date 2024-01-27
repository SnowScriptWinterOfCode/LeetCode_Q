# Maximum Length of a Concatenated String with Unique Characters

## Approach:

- `isUnique Function`:
  - Iterates through each character in a string.
  - Checks for uniqueness using an unordered set.
  - Returns true if all characters are unique, false otherwise.
  - solve Function:

- `Recursive function` to explore two possibilities at each step: taking or not taking the current string.
  - Base case: If the index reaches the size of the vector, returns 0.
  - Calculates the maximum length without taking the current string (notTake).
  - Calculates the maximum length by taking the current string if it is unique (take).
  - Returns the maximum of take and notTake.

- `maxLength Function`:
  - Initializes an empty unordered set to track unique characters.
  - Calls the solve function starting from index 0.
  - Returns the maximum length obtained through recursive choices.


## C++ CODE

```
bool isUnique(string &s, unordered_set<char> &st) {
    for (auto it : s) {
        if (st.find(it) != st.end()) return false;
        st.insert(it);
    }
    return true;
}

int solve(vector<string> &arr, int idx, unordered_set<char> &st) {
    if (idx == arr.size()) return 0;

    int notTake = solve(arr, idx + 1, st);

    int take = 0;
    unordered_set<char> temp_st = st;

    if (isUnique(arr[idx], temp_st)) {
        for (auto it : arr[idx]) {
            temp_st.insert(it);
        }
        take = arr[idx].size() + solve(arr, idx + 1, temp_st);
    }

    return max(take, notTake);
}

int maxLength(vector<string> &arr) {
    unordered_set<char> st;
    return solve(arr, 0, st);
}

```
