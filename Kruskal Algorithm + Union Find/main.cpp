// User function Template for C++
class Solution {
  public:
    // Encontra o representante do conjunto (com path compression)
    int find(vector<int>& parent, int x) {
        if (parent[x] != x)
            parent[x] = find(parent, parent[x]);
        return parent[x];
    }

    // Une dois conjuntos (com union by rank)
    void unionSet(vector<int>& parent, vector<int>& rank, int u, int v) {
        int pu = find(parent, u);
        int pv = find(parent, v);

        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else if (rank[pu] > rank[pv])
            parent[pv] = pu;
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }

    int kruskalsMST(int V, vector<vector<int>>& edges) {
        // Ordena as arestas pelo peso (crescente)
        sort(edges.begin(), edges.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[2] < b[2];
        });

        // Inicializa Union-Find
        vector<int> parent(V), rank(V, 0);
        for (int i = 0; i < V; i++) parent[i] = i;

        int minCost = 0;
        int edgesUsed = 0;

        for (auto& edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];

            int pu = find(parent, u);
            int pv = find(parent, v);

            // Só inclui a aresta se não forma ciclo
            if (pu != pv) {
                unionSet(parent, rank, u, v);
                minCost += w;
                edgesUsed++;

                // MST completa com V-1 arestas
                if (edgesUsed == V - 1) break;
            }
        }

        return minCost;
    }
};