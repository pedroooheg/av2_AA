class Solution {
private:
    vector<int> disc, low;
    vector<bool> inStack;
    stack<int> st;

    int timer = 0;

    vector<vector<int>> sccs;

    void dfs(int u, vector<vector<int>>& adj) {
        disc[u] = low[u] = timer++;

        st.push(u);
        inStack[u] = true;

        for (int v : adj[u]) {

            if (disc[v] == -1) {
                dfs(v, adj);

                low[u] = min(low[u], low[v]);
            }
            else if (inStack[v]) {
                low[u] = min(low[u], disc[v]);
            }
        }

        if (disc[u] == low[u]) {

            vector<int> component;

            while (true) {
                int node = st.top();
                st.pop();

                inStack[node] = false;

                component.push_back(node);

                if (node == u)
                    break;
            }

            sort(component.begin(), component.end());
            sccs.push_back(component);
        }
    }

public:
    vector<vector<int>> tarjans(int V, vector<vector<int>>& adj) {
        disc.assign(V, -1);
        low.assign(V, -1);

            if (disc[i] == -1) {
        }

        sort(sccs.begin(), sccs.end());
    }
};        return sccs;

            }
                dfs(i, adj);
        for (int i = 0; i < V; i++) {
        inStack.assign(V, false);

