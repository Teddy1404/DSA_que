#include<bits/stdc++.h>
using namespace std;
template <typename T>

class Node{
public:
T data;
Node<T> *left;
Node<T> *right;

Node(T data){
    this->data=data;
    left = right = NULL;
}


};
void morrisInorderTreaverseal(Node<int> *root){
    Node<int> *curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            cout<<curr->data<<" ";
            curr = curr->right;
    }
    else{
        Node<int> *predeccessor = curr->left;
        while(predeccessor->right!=NULL && predeccessor->right!=curr){
            predeccessor = predeccessor->right;
        }
        if(predeccessor->right == NULL){
            predeccessor->right = curr;
            curr = curr->left;
        }
        else{
            predeccessor->right = NULL;
            cout<<curr->data<<" ";
            curr = curr->right;
        }
    }

}
}
template <typename T>
Node<T>* buildTree(Node<T>* root) {
    T data;
    cout << "Enter the data (or -1 for NULL): ";
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    root = new Node<T>(data);
    cout << "Enter data for the left child of " << root->data << ": ";
    root->left = buildTree(root->left);
    cout << "Enter data for the right child of " << root->data << ": ";
    root->right = buildTree(root->right);
    return root;
}
int main(){
//   Node<int> *root = new Node<int>(1);
//     root->left = new Node<int>(2);
//     root->right = new Node<int>(3);
//     root->left->left = new Node<int>(4);
//     root->left->right = new Node<int>(5);
     Node<int>* root = NULL;
    root = buildTree(root);
    cout << "In-order traversal using Morris Traversal: ";
   morrisInorderTreaverseal(root);

    return 0;
}