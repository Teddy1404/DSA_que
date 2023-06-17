#include <bits/stdc++.h>
#include <vector>

using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int findPos(vector<int> inorder, int n, int element) {
    for (int i = 0; i < n; i++) {
        if (inorder[i] == element) {
            return i;
        }
    }
    return -1;
}

TreeNode<int> *solve(vector<int> inorder, vector<int> preorder, int &index, int instart, int inend, int n) {
    if (index >= n || instart > inend) {
        return NULL;
    }
    int element = preorder[index++];
    TreeNode<int> *root = new TreeNode<int>(element);
    int position = findPos(inorder, n, element);
    root->left = solve(inorder, preorder, index, instart, position - 1, n);
    root->right = solve(inorder, preorder, index, position + 1, inend, n);
    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder) {
    int n = inorder.size();
    int preorderindex = 0;
    TreeNode<int> *ans = solve(inorder, preorder, preorderindex, 0, n - 1, n);
    return ans;
}

int main() {
    // Read input
    int n;
    cin >> n;
    vector<int> inorder(n);
    vector<int> preorder(n);
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> preorder[i];
    }

    // Build the binary tree
    TreeNode<int> *root = buildBinaryTree(inorder, preorder);

    // Print the tree (inorder traversal)
    stack<TreeNode<int> *> st;
    TreeNode<int> *curr = root;
    while (curr != NULL || !st.empty()) {
        while (curr != NULL) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;

    return 0;
}
