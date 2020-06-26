/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
	bool BST(Node* root, int l, int r) {
        if(root==NULL)
        {
            return true;
        }
        if(root->data <= l || root->data >= r)
        {
            return false;
        }
        if(BST(root->left,l,root->data) && BST(root->right,root->data,r))
        {
            return true;
        }
        return false;
	}
bool checkBST(Node *root)
{
    return BST(root,-1,10001);
}
