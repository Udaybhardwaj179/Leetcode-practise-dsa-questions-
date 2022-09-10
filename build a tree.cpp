#include<iostream>
#include <queue>
using namespace std;
class node
{
    public:
             int data;
             node* left;
             node* right;
    node (int d ){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }      
};
node * buildTree(node * root)
{
        int d;
        cout<<"enter the data"<<endl;
        cin>>d;
        root=new node(d);
        if (d==-1){
            return NULL;
        }
        else{
            cout<<"enter the data for inserting inn left"<<d<<endl;
            root->left=buildTree(root->left);
            cout<<"enter the data for inserting  in right"<<d<<endl;
            root->right=buildTree(root->right);
            return root;
        }
}
void levelorderTraversal(node * root)
{
   queue<node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
    node * temp =q.front();
    q.pop();
    if (temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }


    }
    else{
        cout<<temp->data;
        if (temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

    }
   }

}
void buildFromLevelOrder(node*&root)
 {
    queue<node*> q;
    int  data;
    cout<<"enter the data"<<endl;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
     node*temp=q.front();
     q.pop();
     cout<<"enter the  data for the left node of " <<endl;
     cout<<temp->data;
     int leftdata;
     cin>>leftdata;
     if (leftdata!=-1){
        temp->left=new node(leftdata);
        q.push(temp->left); 
     }
     cout<<"enter the  data for the right node of "<<temp->data<<endl;
     int rightdata;
     cin>>rightdata;
     if (rightdata!=-1){
        temp->right=new node(rightdata);
        q.push(temp->right);
    }
    }
   
}
void inorder (node*root){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main(){
    node* root=NULL;
   /* root  = buildTree(root);
    levelorderTraversal(root);
    inorder(root);*/
    buildFromLevelOrder(root);

    return 0;
}
//1 2 3 -1 -1 4 -1 -1 5 7 -1 -1 -1 