class Solution {
public:
    void roman(string &ans,char low,char mid,char high,int num){
        if (num<4){
            for (int i =0;i<num;i++){
                ans.push_back(low);
            }
        }
        else if (num==4){
            ans.push_back(low);
            ans.push_back(mid);
        }
        else if (num==5){
            ans.push_back(mid);
        }
        else if (num>5 && num<9){
            ans.push_back(mid); 
            int rem = num-5; 
            for (int i =0;i<rem;i++){
                ans.push_back(low);
            }
        }
        else if(num==9){
            ans.push_back(low);
            ans.push_back(high);
        }
        return ;
    }
    string intToRoman(int num) {
        string ans = " ";
        int stored = num;
        //for thousands place 
        roman(ans,'M', ' ', ' ',num/1000);
        num=num%1000;

        //for hundreds place
        roman(ans,'C','D','M',num/100);
        num=num%100;

        //for tens place
        roman(ans,'X','L','C',num/10);
        num=num%10;

        //for ones place 
        roman(ans,'I','V','X',num);
        ans.erase(0,1);
        
        return ans;
    }
};
