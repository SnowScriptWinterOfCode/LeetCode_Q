class Solution {
    public int characterReplacement(String s, int k) {
        int [] character_count = new int[26]; // to keep track of different alphabets
        int n = s.length(); //to get length or size of string

        int start_window = 0; //opening the window
        int max_len=0; //maximum length of substring
        int max_count =0;// to see which character occurs most in string


        for (int end_window=0;end_window<n;end_window++)
        {
           character_count[s.charAt(end_window)-'A']++;
           int present_charcount=character_count[s.charAt(end_window)-'A'];
           max_count=Math.max(max_count,present_charcount);
           while(end_window - start_window +1 -max_count > k) //window size-no of repeating letters
           {
              character_count[s.charAt(start_window)-'A']--; 
              start_window++; 
           }
           max_len = Math.max(max_len,end_window-start_window +1);

        }
        return max_len;  
    }
}
