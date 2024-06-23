#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string>& board, int row, int col) {
    // Check the row on the left side
    for (int j = 0; j < col; j++) {
        if (board[row][j] == 'Q') {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < board.size() && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void generate(vector<string>& board, vector<vector<string>>& ans, int col) {
    if (col == board.size()) {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < board.size(); row++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 'Q';
            generate(board, ans, col + 1);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solve(int n) {
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    generate(board, ans, 0);
    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<vector<string>> ans = solve(n);
    for (const auto& board : ans) {
        cout << "[";
        for (const auto& row : board) {
            cout << "[ " << row << " ]" << endl;
        }
        cout << "]";
        cout << endl;
    }
    return 0;
}
