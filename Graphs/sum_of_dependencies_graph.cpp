#4 Sum of dependencies in a graph

class Solution
{
	int sumOfDependencies(vector<int> adj[],int V)
	{
		int sum=0;
		for(int i=0;i<V;i++)
		{
			sum+=adj[i].size();
			
		}
		return sum;
	}
}