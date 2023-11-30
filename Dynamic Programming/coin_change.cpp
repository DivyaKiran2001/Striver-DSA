#4 Coin Change

#include<bits/stdc++.h>
long countWaysToMake(vector<int> &arr,int n,int T)
{
	//Create 2D table
	vector<vector<long>> dp(n,vector<long>(T+1,0));
	
	//Base Case
	for(int i=0;i<=T;i++)
	{
		if(i%arr[0]==0{
			dp[0][i]=1;
		}
	}
	
	//From index 1 to N
	for(int ind=1;i<N;i++)
	{
		for(int target=0;target<=T;target++)
		{
			long notTaken=dp[i-1][target];
			long taken=0;
			if(arr[ind]<=target)
			{
				taken=dp[ind][target-arr[ind]];
			}
			dp[ind][target]=notTaken+taken;
		}
	}
	return dp[n-1][T];
	
	
}