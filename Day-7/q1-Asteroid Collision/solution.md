## Approach

To solve the "Asteroid Collision" problem, we utilize a stack to simulate the movement of asteroids and handle collisions. The key idea is to iterate through the array of asteroids, considering their directions and sizes, and appropriately handling collisions.

1. **Collision Handling:**
   - If the stack is not empty and the top element of the stack represents an asteroid moving left (negative value) while the current asteroid is moving right (positive value), a collision may occur.
   - We compare the absolute values of the two asteroids to determine the outcome.
     - If the current asteroid has a greater absolute value, it destroys the asteroid at the top of the stack.
     - If both asteroids have the same absolute value, both get destroyed.
     - If the asteroid at the top of the stack has a greater absolute value, no destruction occurs, and we move on to the next asteroid in the array.

2. **Non-Collision Scenario:**
   - If no collision is detected, we simply push the current asteroid onto the stack.

3. **Final State:**
   - After processing all asteroids, the remaining elements in the stack represent the state of asteroids after all collisions.

## Solution

```cpp
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        int i = n - 1;

        while (i >= 0) {
            // Collision Handling
            if (!st.empty() && st.top() < 0 && st.top() * asteroids[i] < 0) {
                int top = st.top();
                st.pop();

                if (abs(top) > abs(asteroids[i])) {
                    st.push(top);
                    i--;  // Only push if the top element had a greater absolute value
                } else if (abs(top) == abs(asteroids[i])) {
                    i--;
                    continue;
                }
                // Do not push the current asteroid into the stack if its absolute value was greater,
                // as it might collide with the remaining elements in the stack.
            } else {
                // Non-Collision Scenario
                st.push(asteroids[i]);
                i--;
            }
        }

        // Extracting the final state from the stack
        vector<int> ans;
        while (!st.empty()) {
            int num = st.top();
            st.pop();
            ans.push_back(num);
        }

        reverse(ans.begin(), ans.end());  // Reverse the result to get the correct order.
        return ans;
    }
};
