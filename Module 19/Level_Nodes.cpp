#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1) {
            current->left = new Node(l);
            q.push(current->left);
        }
        if (r != -1) {
            current->right = new Node(r);
            q.push(current->right);
        }
    }
    return root;
}

void print_level_nodes(Node* root, int level) {
    if (!root) {
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    vector<int> ans;
    while (!q.empty()) {
        Node* node = q.front().first;
        int lvl = q.front().second;
        q.pop();
        if (lvl == level) ans.push_back(node->val);
        if (node->left) q.push({node->left, lvl + 1});
        if (node->right) q.push({node->right, lvl + 1});
    }
    if (ans.empty()) cout << "Invalid" << endl;
    else {
        for (int v : ans) cout << v << " ";
        cout << endl;
    }
}

int main() {
    Node* root = input_tree();
    int level;
    cin >> level;
    print_level_nodes(root, level);
}