#1 Breadth First Search(Level Order Traversal)

vector<int> bfs(int V,vector<int> &adj){
	queue<int>q;
	q.push(0);
	vector<int> bfs;
	int vis[V]={0};
	vis[0]=1;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		bfs.push_back(node);
		for(auto it:adj[node]){
			if(!vis[it]){
				vis[it]=1;
				q.push(it);
			}
		}
		return bfs;
	}
}