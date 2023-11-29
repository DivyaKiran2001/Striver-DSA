#18 Level Order Traversal

#include<bits/stdc++.h>

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      if(node==NULL) return {};
      queue<Node*>q;
      q.push(node);
      vector<int> lev;
      while(!q.empty()){
          Node* root=q.front();
          q.pop();
          lev.push_back(root->data);
          if(root->left!=NULL){
              q.push(root->left);
          }
          if(root->right!=NULL){
              q.push(root->right);
          }

      }
      return lev;
      
    }
};