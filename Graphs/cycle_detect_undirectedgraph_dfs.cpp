#Detect Cycle in an Undirected Graph using DFS Traversal

class Solution{
private:
	bool dfs(int node,int parent,vector<int> vis[],vector<int> adj[])
	{
		vis[node]=1;
		for(auto it:adj[node])
		{
			if(!vis[it])
			{
				if(dfs(it,node,vis,adj)==true)
					return true;
			}
			else if(it!=parent)
			{
				return true;
			}
		}
		return false;
	}

public:
	bool isCycle(int V,vector<int> adj[])
	{
		int vis[V]={0};
		for(int i=0;i<V;i++)
		{
			if(!vis[i])
			{
				if(dfs(i,-1,vis,adj)==true)
					return true;
			}
		}
		return false;
	}
}