class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         stack<int> st;

        for (int val : asteroids) {
            if (st.empty() || val > 0) {
                st.push(val);
            } else {
                while (true) {
                    int peek = st.top();
                    if (peek < 0) {
                        st.push(val);
                        break;
                    } else if (peek == -val) {
                        st.pop();
                        break;
                    } else if (peek > -val) {
                        break;
                    } else {
                        st.pop();
                        if (st.empty()) {
                            st.push(val);
                            break;
                        }
                    }
                }
            }
        }

        int size = st.size();
        std::vector<int> ans(size);

        while (!st.empty()) {
            if (size > 0) {
                ans[size - 1] = st.top();
                st.pop();
                size--;
            }
        }

        return ans;
    }
};