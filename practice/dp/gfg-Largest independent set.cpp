// https://practice.geeksforgeeks.org/problems/largest-independent-set-problem/1/?category[]=Dynamic%20Programming&page=1&query=category[]Dynamic%20Programmingpage1

// you are required to complete this function
// function should return the size of the 
// Largest Independent set in the tree
int LISS(struct Node *root)
{
    if(root==NULL)return 0;
    int sum_includeroot =0;
    int sum_excluderoot =0;
    
    sum_excluderoot+=LISS(root->left)+LISS(root->right);
    sum_includeroot+=1;
    if(root->left)sum_includeroot+=LISS(root->left->left)+LISS(root->left->right);
    if(root->right)sum_includeroot+=LISS(root->right->left)+LISS(root->right->right);
    return max(sum_includeroot,sum_excluderoot);
}