class cmp{
    public:
    bool operator()(pair<float,vector<int>>&a,pair<float,vector<int>>&b){
        return a.first<b.first;
    }
    };
class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        for(auto e:points){
           int d= (pow(e[0],2)+pow(e[1],2));
           pq.push({d,e});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>>ans;
        while(k--){
            ans.push_back(pq.top().second);
           pq.pop(); 
        }
        return ans;
    }
};
