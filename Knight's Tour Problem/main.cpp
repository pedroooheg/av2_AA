class Solution {
private:
    vector<vector<int>> board;

    int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    bool isValid(int x, int y, int n) {
        return x >= 0 &&
               x < n &&
               y >= 0 &&
               y < n &&
               board[x][y] == -1;
    }

    bool backtrack(int x, int y, int step, int n) {
        if (step == n * n)
            return true;

        for (int k = 0; k < 8; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (isValid(nx, ny, n)) {
                board[nx][ny] = step;

                if (backtrack(nx, ny, step + 1, n))
                    return true;

                board[nx][ny] = -1; // desfaz movimento
            }
        }

        return false;
    }

public:
    vector<vector<int>> knightTour(int n) {

        board.assign(n, vector<int>(n, -1));

        board[0][0] = 0;

        if (backtrack(0, 0, 1, n))
            return board;

        return {};
    }
};
