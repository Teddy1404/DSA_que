#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};
node* buildtree(node* root){

cout<<"enter the data "<<endl;
int data;
cin>>data;
root = new node(data);
if(data == -1)
{
    return NULL;
}
cout<<"Enter data for inseting in the  left "<<root->data<<endl;
root->left = buildtree(root->left);
cout<<"Enter data for inserting in the right "<<root->data<<endl;
root->right = buildtree(root->right);
return root;
}
void levelorderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
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
void reverseOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }
    
    queue<node*> q;
    stack<int> s;
    q.push(root);
    
    while (!q.empty()) {
        node* current = q.front();
        q.pop();
        s.push(current->data);
        
        if (current->right) {
            q.push(current->right);
        }
        if (current->left) {
            q.push(current->left);
        }
    }
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}
void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void postorder(node* root)
{
    if(root == NULL)
    {return;}
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }

int main(int argc, char const *argv[])
{
    node* root = NULL;
    root = buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    
    
    // cout << "Printing the reverse order traversal output:" << endl;
    // reverseOrderTraversal(root);
    cout<<"preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
