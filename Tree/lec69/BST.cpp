#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insertIntoBST(Node* &root,int d)
{
    //base case
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if(d>root->data)
    {
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
return root;
}
void levelorderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1)
    {
    insertIntoBST(root,data);
    cin>>data;
    }
}
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void postorder(Node* root)
{
    if(root == NULL)
    {return;}
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node * minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
Node* deleteFromBST(Node* root, int val)
{
    //base case
    if(root == nullptr)
    {
        return root;
    }
    if(root->data == val){
     //0 child
    if(root->left == nullptr || root->right==nullptr)
    {
        delete root;
        return nullptr;
    }
     //1 child

     //left child
    if(root->left!=nullptr && root->right==nullptr)
    {
        Node* temp = root->left;
        delete root;
        return temp;
    }
    //right child
     if(root->left==nullptr && root->right!=nullptr)
    {
        Node* temp = root->right;
        delete root;
        return temp;
    }
     //2 child
     //ya to right me se min val nikal to ya left me se max value nikal lo
     if(root->left!=nullptr && root->right==nullptr)
     {
        int mini = minVal(root->right)->data;
        root->data = mini;
        root->right = deleteFromBST(root->right,mini);
        return root;

     }
    }
    else if(root->data>val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else{
      root->right = deleteFromBST(root->right,val);
      return root;
    }

}
int main(int argc, char const *argv[])
{
    /* code */
    Node* root =NULL;
    cout<<"Enter data to create BST"<<endl;
    // 10 8 21 7 27 5 4 3 -1
    takeInput(root);
    cout<<"printing the bst"<<endl;
    levelorderTraversal(root);

    cout<<endl<<"Printing preorder "<<endl;
    preorder(root);
     cout<<endl<<"Printing inorder "<<endl;
    inorder(root);
     cout<<endl<<"Printing postorder "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"The minimum value is----->"<<minVal(root)->data<<endl;
    cout<<"The maximum value is----->"<<maxval(root)->data<<endl;
    
    //deletion
    root = deleteFromBST(root,27);



    cout<<"printing the bst"<<endl;
    levelorderTraversal(root);

    cout<<endl<<"Printing preorder "<<endl;
    preorder(root);
     cout<<endl<<"Printing inorder "<<endl;
    inorder(root);
     cout<<endl<<"Printing postorder "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"The minimum value is----->"<<minVal(root)->data<<endl;
    cout<<"The maximum value is----->"<<maxval(root)->data<<endl;
    return 0;
}
