#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<char>> &board, int i, int j, string &word, int ind, vector<vector<bool>> &visited)
{
    //                                     0      0                       0
    // base case
    if (ind >= word.length())
    { // word length = 3
        return true;
    }
    int rows = board.size(), cols = board[0].size(); // 3 4
    if ((i < 0 || i >= rows || j < 0 || j >= cols) || (board[i][j] != word[ind]) || visited[i][j] == true)
    {
        return false;
    }

    visited[i][j] = true;
    bool downAns = solve(board, i + 1, j, word, ind + 1, visited); //
    bool leftAns = solve(board, i, j - 1, word, ind + 1, visited);
    bool rightAns = solve(board, i, j + 1, word, ind + 1, visited);
    bool upAns = solve(board, i - 1, j, word, ind + 1, visited);
    visited[i][j] = false;
    return downAns || leftAns || rightAns || upAns;
}

bool exist(vector<vector<char>> &board, string word)
{
    int rows = board.size(), cols = board[0].size();
    int ind = 0;
    bool ans = false;
    vector<vector<bool>> visited(rows, vector<bool>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (solve(board, i, j, word, ind, visited))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int col, row;
    cin >> col >> row;
    vector<vector<char>> board(row, vector<char>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> board[i][j];
        }
    }

    string word;
    cin >> word;

    if (exist(board, word))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}