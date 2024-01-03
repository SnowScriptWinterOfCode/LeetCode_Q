class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st = "";
        int i, j ;
        for(i=0 ; i<strs[0].size() ; i++)
        {
            int count = 0 ;
            for(j=0 ; j<strs.size()-1; j++)
            {
                if(strs[j][i] == strs[j+1][i]) 
                {
                    cout<<strs[j][i]<<endl ;
                    count+=1 ;
                    cout<<count<<endl ;
                }
                else 
                    return st ;
            }
            if(count == strs.size()-1)
            {
                st+=strs[j][i] ;
            }
        }
        return st ;
    }
};