#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after splitting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {
            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {
            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
  public:
    int burnTreeUtil(Node *root, map<Node *, Node *> &nodeToParent, int &maxTime) {
        if (root == NULL)
            return 0;

        int leftTime = burnTreeUtil(root->left, nodeToParent, maxTime);
        int rightTime = burnTreeUtil(root->right, nodeToParent, maxTime);

        // If the current node is one of the burning nodes
        if (nodeToParent[root] == NULL || nodeToParent[root]->data == -1) {
            maxTime = max(maxTime, max(leftTime, rightTime) + 1);
            return 1;
        }

        // If the current node is not one of the burning nodes
        if (leftTime > 0 && rightTime > 0) {
            maxTime = max(maxTime, leftTime + rightTime + 1);
            return max(leftTime, rightTime) + 1;
        }

        if (leftTime > 0) {
            maxTime = max(maxTime, leftTime + 1);
            return leftTime + 1;
        }

        if (rightTime > 0) {
            maxTime = max(maxTime, rightTime + 1);
            return rightTime + 1;
        }

        return 0;
    }

    int burnTree(Node *root, int target) {
        // Create a mapping of nodes to their parent nodes
        map<Node *, Node *> nodeToParent;
        Node *targetNode = createParentMapping(root, target, nodeToParent);

        // If the target node doesn't exist or it is the only node in the tree
        if (targetNode == NULL)
            return 0;

        int maxTime = 0;
        burnTreeUtil(root, nodeToParent, maxTime);

        return maxTime;
    }

    Node *createParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent) {
        Node *res = NULL;
        queue<Node *> q;
        q.push(root);
        nodeToParent[root] = NULL;

        while (!q.empty()) {
            Node *front = q.front();
            q.pop();

            if (front->data == target) {
                res = front;
            }

            if (front->left) {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }

            if (front->right) {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }

        return res;
    }
};

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        int target;
        cin >> target;

        Node *root = buildTree(treeString);
        Solution obj;
        cout << obj.burnTree(root, target) << "\n";

        cin.ignore();
    }

    return 0;
}
