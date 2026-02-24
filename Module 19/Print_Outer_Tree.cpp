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

void left_path(Node* node, vector<int>& lefts) {
    if (!node) return;
    if (node->left) left_path(node->left, lefts);
    else if (node->right) left_path(node->right, lefts);
    lefts.push_back(node->val);
}

void right_path(Node* node, vector<int>& rights) {
    if (!node) return;
    rights.push_back(node->val);
    if (node->right) right_path(node->right, rights);
    else if (node->left) right_path(node->left, rights);
}

int main() {
    Node* root = input_tree();
    if (!root) return 0;

    vector<int> lefts, rights;
    if (root->left) left_path(root->left, lefts);
    lefts.push_back(root->val);
    if (root->right) right_path(root->right, rights);

    // Print left path (from leftmost leaf up to root)
    for (int v : lefts) cout << v << " ";
    // Print right path (from root's right child down to rightmost leaf)
    for (int v : rights) cout << v << " ";
    cout << endl;
    return 0;
}