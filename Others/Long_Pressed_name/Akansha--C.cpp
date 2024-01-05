class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0;int j=0;
    int n=name.size(),m=typed.size();
    char x;
    while(i<n&&j<m){
        if(name[i]==typed[j]){ 
            x=name[i];
            int c1=0,c2=0;//for counting the size of windows of same elements of both strings
            while(i<n&&name[i]==x){i++;c1++;} 
            while(j<m&&typed[j]==x){j++;c2++;}
            if(c1>c2)return false;
        }
        else return false;
    }
    if(i==n)i--;
    if(j==m)j--;
    if(name[i]!=typed[j])return false;
    return true;
    }
};