#include <bits/stdc++.h> 
using namespace std;



    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
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



pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    BinaryTreeNode<int>* temp = root;
    int pre = -1;
    int succ = -1;
    while(temp->data != key)
    {
        if(temp->data >key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pre = temp->data;
            temp = temp->right;
        }

    }
    //predecessor
    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree!=NULL)
    {  //max value nikalni hai to right right jaynge
        pre = leftTree->data;
        leftTree = leftTree->right;
    }
    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree!=NULL)
    {
        //min value nikalni hai to left left jaynge
        succ = rightTree->data;
        rightTree = rightTree->left;
    }
    pair<int,int> ans =  make_pair(pre,succ);
    return ans;

    
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

    int key = 3;

    pair<int,int> result = predecessorSuccessor(root,key);
    int predecessor = result.first;
    int successor = result.second;

    cout<<"predecessor of "<<key<<" is "<<predecessor<<endl;

    cout<<"Succcessor of "<<key<<" is "<<successor<<endl;
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