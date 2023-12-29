//Solution in cpp:
#include<iostream>
#include<vector>
using namespace std;
 vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> l_prod(n);
        vector<int> r_prod(n);
        vector<int> ans;
         l_prod[0]=1;
         r_prod[n-1]=1;
    
        for(int i=1;i<n;i++){
            l_prod[i]=l_prod[i-1]*nums[i-1];
 }
             
        for(int i=n-2;i>=0;i--){
            r_prod[i]=r_prod[i+1]*nums[i+1];
 }
 
       for(int i=0;i<n;i++){
           ans.push_back(l_prod[i]*r_prod[i]);
        
 }


  return ans;      
    }
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int element;
        cout<<"enter element";
        cin>>element;
        nums.push_back(element);

    }
vector<int> ans;
ans=productExceptSelf(nums);
for(int i=0;i<nums.size();i++){

    cout<<ans[i]<<" ";
}
}