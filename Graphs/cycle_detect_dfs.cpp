#5 Detect Cycle in a directed graph(USing DFS)

class Solution{
	
	bool dfs(int node,vector<int> adj[],int vis[],int pathvis[])
	{
		vis[node]=1;
		pathvis[node]=1;
		for(auto it:adj[node])
		{
			if(!vis[it]){
				dfs(it,adj,vis,pathvis);
			}
			else if(pathvis[i])
			{
				return true;
			}
		}
		pathvis[node]=0;
		return false;
	}
	
	bool iscyclic(int V,vector<int> adj[])
	{
		int vis[v]={0};
		int pathvis[v]={0};
		for(int i=0;i<V;i++)
		{
			if(!vis[i])
			{
				if(dfs(i,adj,vis,pathvis))==true return true;
			}
		}
	}
}