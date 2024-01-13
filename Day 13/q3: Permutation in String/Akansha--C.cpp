class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if(s1.size()>s2.size()){
            return false;
        }
       vector<int>v1(26,0);
       vector<int>v2(26,0);
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
        }
      
        for(int i=0;i<s1.size()-1;i++){
                v2[s2[i]-'a']++;
        }
        int i=s1.size()-1;
        int j=0;
        while(i<s2.size()){
           v2[s2[i]-'a']++;
           if(v1==v2){
               return true;
           }
           i++;
           v2[s2[j]-'a']--;
           j++;
        }
        return false;
    }
};