#14 Check if a Tree is Binary Search Tree(BST) or not

#To check if a given Binary tree is BST or not we will check the inorder traversal 
#of the given tree and check if it is sorted and as well as that no two adjacent elements 
#are equal.


class Solution
{
	 private:
        void inorder(Node* root,vector<int> &res){
            
            if(root==NULL) return;
            inorder(root->left,res);
            res.push_back(root->data);
            inorder(root->right,res);
        }
        
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        vector<int>res;
        inorder(root,res);
        for(int i=1;i<res.size();i+,+){
            if(res[i]<=res[i-1]){
                return false;
            }
        }
        return true;
    }
}
