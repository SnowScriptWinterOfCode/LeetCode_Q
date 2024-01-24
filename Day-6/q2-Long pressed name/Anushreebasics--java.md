```
class Solution {
    public boolean isLongPressedName(String name, String typed) {
        if(name.length()>typed.length()){
            return false;
        }
        int i=0;
        int j=0;
        char prev=name.charAt(0);
        while(i<name.length() && j<typed.length()){
            char ch1=name.charAt(i);
            char ch2=typed.charAt(j);
            if(ch1==ch2){
                i++;
                j++;
                prev=ch1;
            }
            else if(ch2==prev){
                j++;
                
            }
            else{
                return false;
            }
        }
        if(i<name.length()){
            return false;
        }
        while(j<typed.length()){
            if(typed.charAt(j)!=prev)
            return false;
            j++;

        }
        return true;
    }
}
```
