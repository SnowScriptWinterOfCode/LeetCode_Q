class Solution {
public:
    vector <int> smallesttoleft(vector<int> arr){
        stack<int> st; 
        vector<int> vec; 
        int n = arr.size(); 
        st.push(-1);
        for (int i =0; i<n;i++){
            while(st.top()!=-1 && arr[st.top()]>=arr[i] ){
                st.pop();
            }
            vec.push_back(st.top());
            st.push(i);
        }
        return vec; 
    }
     vector <int> smallesttoright(vector<int> arr){
        stack<int> st; 
        vector<int> vec; 
        int n = arr.size(); 
        st.push(-1);
        for (int i =n-1; i>=0;i--){
            while(st.top()!=-1 && arr[st.top()]>=arr[i] ){
                st.pop();
            }
            vec.push_back(st.top());
            st.push(i);
        }
        reverse(vec.begin(),vec.end());
        return vec; 
    }
    int largestRectangleArea(vector<int>& heights) {
        vector <int> lsmall = smallesttoleft(heights); 
        vector <int> rsmall = smallesttoright(heights);
        int n = heights.size();

        int area=0,ans=0,width=0;
        for (int i = 0 ;i<n;i++){
            if (rsmall[i]==-1 && lsmall[i]==-1){
                rsmall[i]=n;
                width = rsmall[i] - lsmall[i] - 1;
            } 
            if(rsmall[i]==-1){
                rsmall[i]=n;
                width = rsmall[i] - lsmall[i] - 1;
            }
            else{
                width = rsmall[i] - lsmall[i] - 1;
            }
            area = width*heights[i];

            ans = max(ans,area);
        }
        return ans;
    }
};
