#define ll long long

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        ll n = nums.size();
        // y - x
        ll temp = accumulate(nums.begin(), nums.end(), 0);
        ll T = ((n * (n + 1)) / 2) - temp;
        ll squaresum = 0;
        for (ll i = 0; i < n; i++) {
            squaresum += nums[i] * nums[i];
        }
        ll S = (n * (n + 1) * (2 * n + 1) / 6) - squaresum;
        ll actual = ((S/T)+T)/2;
        ll repeated = (S/T)-actual;

        vector<int> ans = {int(repeated), int(actual)};
        return ans;
    }
};
