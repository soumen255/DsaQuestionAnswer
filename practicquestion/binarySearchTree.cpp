#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    
    Node(int x){
        data=x;
        left=right=NULL;
        
    }
    void binary_search_tree_insertion(Node *root){
        int x;
         

        if(x<root->data){
            root->left=new Node(x);
            
            

        }

        if(x>=root->data){
            root->right=new Node(x);

        }

        
        

         
        
    }
    void print(){
        
    }
    

};

int main(){
    Node *root;
    root->data=45;
    root->binary_search_tree_insertion(root);
    return 0;

}