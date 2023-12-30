
Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighbouring. The same letter cell may not be used more than once.

Example 1:



![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/ad373258-b6a3-4f49-a518-0d949f57a209)


Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true

Example 2:


![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/21461c62-71fa-421d-8ab0-d8f8fb958235)


Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
Output: true

Example 3:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/9ff58f8b-f9c4-4662-a2fe-dfebf380b507)


Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
Output: false

Constraints:

m == board.length
n = board[i].length
1 <= m, n <= 6
1 <= word.length <= 15
board and word consists of only lowercase and uppercase English letters.
