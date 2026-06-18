class Solution {
    vector<vector<bool>> cols;
    vector<vector<bool>> rows;
    vector<vector<bool>> boxes;
public:
    void solveSudoku(vector<vector<char>>& board) {
        cols.resize(9,vector<bool>(10));
        rows.resize(9,vector<bool>(10));
        boxes.resize(9,vector<bool>(10));
        dfs(0,0,board);
    }
    bool dfs(int r,int c,vector<vector<char>>& board) {
        if (r == 9) return true;
        if (c == 9) return dfs(r+1,0,board);
        if (board[r][c] != '.') return dfs(r,c+1,board);

        int b = ((r/3) * 3)  + (c / 3);
        for (int d = 1;d<=9;d++) {
            char ch = d +'0';
            // if (cols[c][d] || rows[r][d] || boxes[b][d]) continue;
            if (!isValid(r,c,board,ch)) continue;
            // cols[c][d] = true;
            // rows[r][d] = true;
            // boxes[b][d] = true;
            board[r][c] = ch;
            bool check = dfs(r,c+1,board);
            if (check) return true;
            // cols[c][d] = false;
            // rows[r][d] = false;
            // boxes[b][d] = false;
            board[r][c] = '.';   
        }
        return false;
    }
    bool isValid(int r,int c,vector<vector<char>>& board,char ch) {
        for (int i = 0;i<9;i++) {
            if (board[r][i] == ch) return false;
        }
        for (int i = 0;i<9;i++) {
            if (board[i][c] == ch) return false;
        }
        int r1 = r/3 * 3;
        int c1 = c/3 * 3;
        for (int i = r1;i<r1+3;i++) {
            for (int j = c1;j<c1+3;j++) {
                if (board[i][j] == ch) return false;
            }
        }
        return true;
    }
};