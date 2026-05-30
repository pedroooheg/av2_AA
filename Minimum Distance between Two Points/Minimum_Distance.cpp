class Solution {
public:

    struct Point {
        double x, y;
    };

    double distancia(const Point& a, const Point& b) {
        double dx = a.x - b.x;
        double dy = a.y - b.y;
        return sqrt(dx * dx + dy * dy);
    }

    double bruteForce(vector<Point>& pts, int l, int r) {
        double ans = 1e18;

        for (int i = l; i <= r; i++) {
            for (int j = i + 1; j <= r; j++) {
                ans = min(ans, distancia(pts[i], pts[j]));
            }
        }

        return ans;
    }

    double faixaMaisProxima(vector<Point>& faixa, double d) {

        int n = faixa.size();

        for (int i = 0; i < n; i++) {

            for (int j = i + 1;
                 j < n &&
                 (faixa[j].y - faixa[i].y) < d;
                 j++) {

                d = min(d, distancia(faixa[i], faixa[j]));
            }
        }

        return d;
    }

    double solve(vector<Point>& pts, int l, int r) {

        if (r - l <= 3)
            return bruteForce(pts, l, r);

        int mid = (l + r) / 2;

        Point meio = pts[mid];

        double dl = solve(pts, l, mid);
        double dr = solve(pts, mid + 1, r);

        double d = min(dl, dr);

        vector<Point> faixa;

        for (int i = l; i <= r; i++) {
            if (abs(pts[i].x - meio.x) < d) {
                faixa.push_back(pts[i]);
            }
        }

        sort(faixa.begin(),
             faixa.end(),
             [](const Point& a, const Point& b) {
                 return a.y < b.y;
             });

        return min(d, faixaMaisProxima(faixa, d));
    }

    double minDistance(vector<vector<double>>& arr) {

        int n = arr.size();

        vector<Point> pts(n);

        for (int i = 0; i < n; i++) {
            pts[i] = {arr[i][0], arr[i][1]};
        }

        sort(pts.begin(),
             pts.end(),
             [](const Point& a, const Point& b) {

                 if (a.x == b.x)
                     return a.y < b.y;

                 return a.x < b.x;
             });

        return solve(pts, 0, n - 1);
    }
};