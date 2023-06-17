#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;


    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAthead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;


}
void InsetAtTail(Node* &tail,int d)
{
Node* temp = new Node(d);
tail->next = temp;
tail = tail->next;
}

void insertAtPosition(Node* &tail,Node* &head,int position , int d)
{
    if(position == 1)
    {
        InsertAthead(head,d);
   return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt<position-1)

    {
        temp = temp->next;
        cnt++;
    }
    //inseting at last position 
    if(temp->next == NULL)
    {
        InsetAtTail(tail,d);
        return;
    }
    //creting a node for d
        Node* nodeToinsert = new Node(d);
        nodeToinsert -> next = temp -> next;
        temp -> next = nodeToinsert;
}

void deleteNode(int position, Node* &head)
{
    //deleting first or start node
    if(position == 1)
    {
    Node* temp = head;
    head = head->next;
    //memory free
    temp->next = NULL;
    delete temp;
    }
    else{
        //deleting any middle node or last node 
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr +1;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    
 cout<<endl;
}


int main()
{ //created a new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    print (head); 
    InsertAthead(head,12);
    print(head);
     InsertAthead(head,15);
    print(head);  
    InsetAtTail(tail, 20)   ;   
    print(head);
   insertAtPosition(tail,head,5,22);
   print(head);
 
   cout<<"head  "<<head->data<<endl;
   cout<<"tail  "<<tail->data<<endl;
     deleteNode(4,head);
   print(head);
    return 0;
}
