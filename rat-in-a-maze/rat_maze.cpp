// Rat in a Maze - GeeksForGeeks
// Pedro Henrique Gomes

class Solution {

private:

    void backtrack(
        int x,
        int y,
        vector<vector<int>> &mat,
        int n,
        string caminho,
        vector<string> &res,
        vector<vector<int>> &visitado
    ) {

        if (x == n - 1 && y == n - 1) {
            res.push_back(caminho);
            return;
        }

        string direcoes = "DLRU";

        int dx[] = {1, 0, 0, -1};
        int dy[] = {0, -1, 1, 0};

        for (int i = 0; i < 4; i++) {

            int novoX = x + dx[i];
            int novoY = y + dy[i];

            if (
                novoX >= 0 && novoX < n &&
                novoY >= 0 && novoY < n &&
                mat[novoX][novoY] == 1 &&
                !visitado[novoX][novoY]
            ) {

                visitado[novoX][novoY] = 1;

                backtrack(
                    novoX,
                    novoY,
                    mat,
                    n,
                    caminho + direcoes[i],
                    res,
                    visitado
                );

                visitado[novoX][novoY] = 0;
            }
        }
    }

public:

    vector<string> ratInMaze(vector<vector<int>> &mat) {

        int n = mat.size();

        vector<string> res;

        if (mat[0][0] == 0) {
            return res;
        }

        vector<vector<int>> visitado(
            n,
            vector<int>(n, 0)
        );

        visitado[0][0] = 1;

        backtrack(
            0,
            0,
            mat,
            n,
            "",
            res,
            visitado
        );

        return res;
    }
};