#2 Depth first Search(DFS)

class Solution{
	void dfs(int node,vector<int> adj[],int vis[],vector<int> &res)
	{
		vis[node]=1;
		ls.push_back(node);
		for(auto it:adj[node])
		{
			if(!vis[i])
			{
				dfs(it,adj,vis,res);
			}
		}
		
		
	}
	
	vector<int> dfs(int V,vector<int> adj[]){
		int vis[V]={0};
		int start=0;
		vector<int> res;
		dfs(start,adj,vis,res);
		return res;
	}
}