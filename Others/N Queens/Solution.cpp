char cell[101][101];
int sol_count = 1;

bool isValid(int x, int y, int n) {

    if (x < 0 || x >= n) return false;
    if (y < 0 || y >= n) return false;

    for(int i=0; i<x; i++) {
        if (cell[i][y] == 'Q') return false;
    }

    for(int i=x, j=y; i>=0 && j>=0; i--,j--) {
        if (cell[i][j] == 'Q') return false;
    }

    for(int i=x, j=y; i>=0 && j<n; i--, j++) {
        if (cell[i][j] == 'Q') return false;
    }

    return true;
}

void printSolution(int n) {

    cout << "Solution #" << sol_count++ << endl;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << cell[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(int row, int n) {

    if (row == n) {
        printSolution(n);
        return;
    }

    for(int j=0; j<n; j++) {
        if (isValid(row, j, n)) {
            cell[row][j] = 'Q';
            solve(row+1, n);
            cell[row][j] = 'x';
        }
    }
}

    solve(0, n);
    
    return 0;
}
