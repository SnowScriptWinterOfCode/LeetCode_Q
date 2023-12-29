###Write the question here!
<p>
  <b color="blue"> Q1. Find smallest letter greater than target</b><br>
  You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.
Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.</p>

<p> Solution Steps <li>Parse array</li>
<li>If target> arr[i] --> i++</li>
<li>If target is not > arr[i] --> return arr[i]</li>
<li> If even at the end of parsing the array there is no character that fulfills the if condition --> return arr[0]</li></p>

<u>Solution in file : q1.java</u>


