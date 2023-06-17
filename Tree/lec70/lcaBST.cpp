#include <bits/stdc++.h> 
using namespace std;

    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };


TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here

// Iterative approach
// while(root!=NULL)
// {
// if(root->data<P->data && root->data < Q->data){
//     root = root->right;
// }
// else if(root->data > P->data && root->data > Q->data)
// {
//     root = root->left;
// }
// else{
//     return root;
// }

// }

    
    if(root == NULL)
    {
        return  NULL;
    }
    if(root->data < P->data && root->data < Q->data){
        return LCAinaBST(root->right,P,Q);
    }
    if(root->data> P->data && root->data >Q->data){
        return LCAinaBST(root->left,P,Q);
    }
    return root;
}
int main(int argc, char const *argv[])
{
    
   // Create a sample binary search tree
    TreeNode<int>* root = new TreeNode<int>(4);
    root->left = new TreeNode<int>(2);
    root->right = new TreeNode<int>(6);
    root->left->left = new TreeNode<int>(1);
    root->left->right = new TreeNode<int>(3);
    root->right->left = new TreeNode<int>(5);
    root->right->right = new TreeNode<int>(7);

    // Call the validateBST function to check if the tree is a valid binary search tree
   TreeNode<int>* P = root->left->left;
   TreeNode<int>* Q = root->left->right;

   TreeNode<int>* lca = LCAinaBST(root,P,Q);
   if(lca!=NULL)
   {
    cout<<"LCA------>"<<lca->data<<endl;

   }
   else{
    cout<<"No LCA found"<<endl;
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
