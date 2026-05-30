class Solution {
public:
    // Nó da árvore de Huffman
    struct Node {
        int freq;
        int index;      
        Node *left, *right;

        // Nó folha
        Node(int f, int i) : freq(f), index(i), left(nullptr), right(nullptr) {}

        // Nó interno
        Node(Node* l, Node* r) {
            freq  = l->freq + r->freq;
            index = min(l->index, r->index);
            left  = l;
            right = r;
        }
    };

    // Comparador para a min-heap
    struct Compare {
        bool operator()(Node* a, Node* b) {
            if (a->freq != b->freq)
                return a->freq > b->freq;  
            return a->index > b->index;   
        }
    };

    void preOrder(Node* root, vector<string>& ans, string curr) {
        if (!root) return;

        if (!root->left && !root->right) {
            ans.push_back(curr == "" ? "0" : curr); 
            return;
        }

        preOrder(root->left,  ans, curr + '0');
        preOrder(root->right, ans, curr + '1');
    }

    vector<string> huffmanCodes(string& s, vector<int> f) {
        int n = s.size();

        if (n == 1) return {"0"};

        priority_queue<Node*, vector<Node*>, Compare> pq;
        for (int i = 0; i < n; i++)
            pq.push(new Node(f[i], i));

        // Constrói a árvore de Huffman
        while (pq.size() >= 2) {
            Node* l = pq.top(); pq.pop();
            Node* r = pq.top(); pq.pop();
            pq.push(new Node(l, r));
        }

        // Coleta os códigos percorrendo a árvore
        vector<string> ans;
        preOrder(pq.top(), ans, "");
        return ans;
    }
};