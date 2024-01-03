It's an easy question.
Approach 1
(CPP CODE)

Start searching from finish to start. Keep adding 1 as long as a letter is found. Keeping a flag to determine if we have found a letter or not. So, if we find a blank space after getting a letter we should get out of the loop.
Complexity
Time complexity: O(n)
Space complexity: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
     if(s.length()==0){    //Base case if s is empty return 0;
         return 0;
     } 
        int count=0;      //maintain count
        bool flag = false;
        for(int i=s.length()-1; i>=0 ;i--){
            if((s[i]>='a' && s[i]<='z') ||( s[i]>='A' && s[i]<='Z')){ //check last of string start with any alphabet and not an space.
                flag=true;
               count++;
           }
            
            else{
                if(flag==true)   //If its a space return count 
                    return count;
            }
        }
        return count;
    }
};


Approach 2
(JAVA CODE)

Complexity
Time complexity: O(n)
Space complexity: O(1)

public class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                count++;
            } else if (count > 0) {
                return count;
            }
        }
        return count;
    }
}

Approach 3
(CODE IN CPP)

USING STACK

class Solution {
public:
    int lengthOfLastWord(string s) {
       stack<char> st;
       int x=0;
        int n = s.length();
       while(s[n] == ' '){
           n--;
       }
       for(int i=s.length()-1; i>=0; i--){
           char ch  = s[i];

           if(s[i]!=' '){

               st.push(ch);
           }
           else if(s[i]==' ' && !st.empty()){
            
              break;
               
           } 
       }
        x = st.size();
        
       return x;
        
    }
};

(PYTHON SOLUTION)
Remove whitespaces, capture rightmost word and return its length

Approach
use rstrip() to remove right whitespaces
split the list
return length of last word, ie list[-1]
 
Code
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.rstrip().split()[-1])
        
