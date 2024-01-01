    int romanToInt(string s) {
        map<char,int> sy_val;
        sy_val['I']=1;
        sy_val['V']=5;
        sy_val['X']=10;
        sy_val['L']=50;
        sy_val['C']=100;
        sy_val['D']=500;
        sy_val['M']=1000;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(sy_val[s[i]]<sy_val[s[i+1]]){
                ans-=sy_val[s[i]];
            }else{
               ans+=sy_val[s[i]]; 
            }
        }

        return ans;
    }
