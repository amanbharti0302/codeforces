////////////////////////////////////////////////////////tree
class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {   
        data=x;
        left=NULL;
        right=NULL;
    }
};
void inordertraverse(Node *root)
{  
    if(!root)return;
    inordertraverse(root->left);
    cout<<root->data<<" ";
    inordertraverse(root->right);
}

