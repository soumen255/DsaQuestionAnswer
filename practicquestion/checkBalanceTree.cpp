#include <iostream>
using namespace std;
#include<queue>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    void Tree_create(Node* root) {
    int first, second;
    queue<Node*> q;

    q.push(root); // Start with the root node
    while (!q.empty()) {
        Node* temp = q.front(); // Get the front node
        q.pop();

        cout << "Enter the left value of " << temp->data << " (-1 for no child): ";
        cin >> first;
        if (first != -1) { // Check for valid input
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << "Enter the right value of " << temp->data << " (-1 for no child): ";
        cin >> second;
        if (second != -1) { // Check for valid input
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}

    int hight(Node *root,bool&valid){
        if(!root){
            return 0;
        }
        int l=hight(root->left,valid);
        if(valid){
        int r=hight(root->right,valid);
        if(abs(l-r)>1){
            valid=0;
        }
        return 1+max(l,r);
        }

        return -1;
        
    }
    bool isBalanced(Node *root)
    {
        bool valid=1;
        hight(root,valid);
        return valid;
        
        
        
        
        
    }


};

int main(){
     int k;
    cout << "Enter root value: ";
    cin >> k;

    Node* root = new Node(k); // Create root node
    Solution test;
    test.Tree_create(root);
    bool ans =test.isBalanced(root);
    if(ans){
        cout<<"this tree is balance : ";
    }
    else{
        cout<<"this is not a balanced  tree :";
    }

return 0;
}


