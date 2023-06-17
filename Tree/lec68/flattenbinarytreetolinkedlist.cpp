#include <iostream>
#include <vector>
#include <queue>
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

TreeNode<int>* flattenBinaryTree(TreeNode<int> *root) {
    // Write your code here.
    TreeNode<int>* curr = root;
    while(curr!=NULL)
    {
        if(curr->left)
        {
            TreeNode<int>* pred = curr->left;
            while(pred->right)
                pred = pred->right;

            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
    return root;
}

TreeNode<int>* buildBinaryTreeFromArray(const vector<int>& arr) {
    if (arr.empty())
        return nullptr;

    TreeNode<int>* root = new TreeNode<int>(arr[0]);
    queue<TreeNode<int>*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size()) {
        TreeNode<int>* curr = q.front();
        q.pop();

        int leftData = arr[i++];
        if (leftData != -1) {
            curr->left = new TreeNode<int>(leftData);
            q.push(curr->left);
        }

        if (i < arr.size()) {
            int rightData = arr[i++];
            if (rightData != -1) {
                curr->right = new TreeNode<int>(rightData);
                q.push(curr->right);
            }
        }
    }

    return root;
}

void printFlattenedTree(TreeNode<int>* root) {
    while (root != nullptr) {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8};
    TreeNode<int>* root = buildBinaryTreeFromArray(arr);



    root = flattenBinaryTree(root);

    cout << "Flattened Binary Tree: ";
    printFlattenedTree(root);

    return 0;
}
