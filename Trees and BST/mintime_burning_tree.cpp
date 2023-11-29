#17 Minimum Time Takento Burn the Binary tree from a Node/Leaf Node*

#Can be done using BFS(Level Order Traversal)

class Solution {
    
  private:
    int findMaxDistance(map<Node*,Node*> &mpp,Node* t)
    {
        queue<Node*> q;
        q.push(t);
        map<Node*,int> vis;
        vis[t]=1;
        int ti=0;
        while(!q.empty())
        {
            int n=q.size();
            int flag=0;
            for(int i=0;i<n;i++)
            {
                auto node=q.front();
                q.pop();
                //left pointer
                if(node->left && !vis[node->left])
                {
                    flag=1;
                    vis[node->left]=1;
                    q.push(node->left);
                }
                //right pointer
                if(node->right && !vis[node->right])
                {
                    flag=1;
                    vis[node->right]=1;
                    q.push(node->right);
                }
                //parent pointer
                if(mpp[node] && !vis[mpp[node]])
                {
                    flag=1;
                    vis[mpp[node]]=1;
                    q.push(mpp[node]);
                }
            }
            if(flag) ti++;
        }
        return ti;
    }
  
  
  
  
  
    Node* bfsToMapParent(Node* root,map<Node*,Node*> &mpp,int target){
        queue<Node*> q;
        q.push(root);
        Node* res;
        while(!q.empty())
        {
            Node* node=q.front();
            q.pop();
            if(node->data == target) res=node;
            if(node->left)
            {
                mpp[node->left]=node;
                q.push(node->left);
            }
            if(node->right)
            {
                mpp[node->right]=node;
                q.push(node->right);
            }
        }
        return res;
    }
    

  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*> mpp;
        Node* t=bfsToMapParent(root,mpp,target);
        int ti=findMaxDistance(mpp,t);
        return ti;
        
    }
};