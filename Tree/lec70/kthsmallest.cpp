#include<bits/stdc++.h>
using namespace std;
//The time complexity of the kthSmallest function is O(N), where N is the number of nodes in the binary tree. This is because in the worst case, the function may need to visit all nodes of the tree to find the kth smallest element.

//The space complexity of the kthSmallest function is O(H), where H is the height of the binary tree. This is because the function uses recursive calls that consume memory on the function call stack. The maximum depth of the function call stack is equal to the height of the binary tree.
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
int solve(BinaryTreeNode<int>* root,int &i,int k)
{
    if(root == NULL)
    {
        return -1;
    }
    int left = solve(root->left,i,k);
    if(left!=-1)
    {
        return left;
    }
    i++;
    if(i==k)
    {
        return root->data;
    }
    return solve(root->right,i,k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i = 0;
    int ans = solve(root ,i,k);
    return ans;
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
