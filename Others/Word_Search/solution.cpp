char cell[101][101];
int vis[101][101];
int n;
bool res = false;
string word;

bool isValid(int x, int y, int ind) {

    if (x < 0 || x >= n) return false;
    if (y < 0 || y >= n) return false;
    if (vis[x][y] == 1) return false;
    if (cell[x][y] != word[ind]) return false;
    return true;
}

void word_search(int x, int y, int ind) {

    vis[x][y] = true;

    if (ind == word.size()-1) {
        res = true;
        vis[x][y] = false;
        return;
    }

    if (isValid(x-1, y, ind+1)) word_search(x-1, y, ind+1);
    if (isValid(x+1, y, ind+1)) word_search(x+1, y, ind+1);
    if (isValid(x, y-1, ind+1)) word_search(x, y-1, ind+1);
    if (isValid(x, y+1, ind+1)) word_search(x, y+1, ind+1);

    vis[x][y] = false;
    return;
}
