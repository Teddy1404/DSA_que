#include <bits/stdc++.h> 

   template <typename T>
    class BinaryTreeNode 
    {
      public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };


bool solve(BinaryTreeNode<int>* root,int min,int max)
{
    if(root == NULL)
    {
        return true;
    }
    if(root->data> min && root->data< max){
        bool left = solve(root->left,min,root->data);
        bool right = solve(root->right,root->data,max);
        return left && right;
    }
    return false;
}
bool validateBST(BinaryTreeNode<int>* root) 
{
    // Write your code here
    return solve(root,INT_MIN,INT_MAX);
}
int main() {
    // Create a sample binary search tree
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(4);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(6);
    root->left->left = new BinaryTreeNode<int>(1);
    root->left->right = new BinaryTreeNode<int>(3);
    root->right->left = new BinaryTreeNode<int>(5);
    root->right->right = new BinaryTreeNode<int>(7);

    // Call the validateBST function to check if the tree is a valid binary search tree
    if (validateBST(root)) {
        std::cout << "The binary tree is a valid binary search tree." << std::endl;
    } else {
        std::cout << "The binary tree is not a valid binary search tree." << std::endl;
    }

    // Clean up memory by deleting the tree nodes
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
