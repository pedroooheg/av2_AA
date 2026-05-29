class Solution {
public:

    int encontrar(vector<int>& parent, int s) {

        if (parent[s] == s)
            return s;

        return parent[s] = encontrar(parent, parent[s]);
    }

    vector<int> jobSequencing(vector<int> &deadline,
                              vector<int> &profit) {

        int n = deadline.size();

        vector<pair<int,int>> jobs;

        for (int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
        }

        // Ordena por maior lucro
        sort(jobs.begin(), jobs.end(), greater<pair<int,int>>());

        int maxDeadline = 0;

        for (int d : deadline) {
            maxDeadline = max(maxDeadline, d);
        }

        // DSU
        vector<int> parent(maxDeadline + 1);

        for (int i = 0; i <= maxDeadline; i++) {
            parent[i] = i;
        }

        int quantidade = 0;
        int lucroTotal = 0;

        for (auto &job : jobs) {

            int ganho = job.first;
            int limite = job.second;

            // encontra slot livre
            int disponivel = encontrar(parent, limite);

            if (disponivel > 0) {

                quantidade++;
                lucroTotal += ganho;

                // ocupa slot
                parent[disponivel] =
                    encontrar(parent, disponivel - 1);
            }
        }

        return {quantidade, lucroTotal};
    }
};