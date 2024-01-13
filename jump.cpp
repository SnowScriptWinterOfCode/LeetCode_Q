#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int i = 0, n = nums.size();
    if (n == 1)
    {
        return 1;
    }

    int mx = 0;
    while (i < n && mx >= i)
    {
        mx = max(mx, i + nums[i]);

        if (mx >= n - 1)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    vector<int>arr={2,3,1,1,4};
    canJump(arr) ?cout<<"true":cout<<"false";
    return 0;
}