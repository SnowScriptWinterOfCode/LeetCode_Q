(THE CODE)
```
class Solution {

public:

    string reverseWords(string s) {

        int n=s.size()-1;

        string r,temp;

        int j=n;

        while(s[j]==' '){

            j--;

        }

        for(int i=j;i>=0;i--){

            if(s[i]==' ' and s[i+1]==' '){

                continue;

            }

            else if(s[i]==' ' and s[i+1]!=' '){

                reverse(temp.begin(), temp.end());

                r=r+temp;

                temp="";

                r.push_back(s[i]);
            }
            else if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9')){

                temp.push_back(s[i]);

            }
        }

        if(temp.size()!=0){

            reverse(temp.begin(), temp.end());

                r=r+temp;

                temp="";

        }

        int k=r.size()-1;

        while(r[k]==' '){

            k--;

            r.pop_back();

        }

        return r;
    }

};
```
