/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
	bool check(Node* root, int maxleft ,int maxright) {
        if(root== NULL)
        {
            return true;
        }
        if(root->data <= maxleft || root->data >= maxright)
        {
            return false;
        }
        return (check(root->left,maxleft,root->data) && check(root->right,root->data,maxright));
	}
bool checkBST(Node* root)
{
    return check(root,-1,10001);
}