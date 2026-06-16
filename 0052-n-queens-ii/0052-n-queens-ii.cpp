class Solution {
    int count = 0;
    vector<bool> diag1;
    vector<bool> diag2;
    vector<bool> cols;
    int n;
public:
    int totalNQueens(int n) {
        this->n = n;
        diag1.resize(2*n-1,false);
        diag2.resize(2*n-1,false);
        cols.resize(n,false);
        generate(0);
        return count;
    }
    void generate(int row) {
        if (row == n) {
            count++;
            return;
        }
        for (int col = 0;col<n;col++) {
            int d1 = row + col;
            int d2 = row - col + n -1;
            if (cols[col] || diag1[d1] || diag2[d2]) continue;
            cols[col] = true;
            diag1[d1] = true;
            diag2[d2] = true;
            generate(row+1);
            cols[col] = false;
            diag1[d1] = false;
            diag2[d2] = false;
        }
    }
};