#3 Best Time to buy and Sell Stock

class Solution{
	int maxProfit(vector<int> &prices){
		int mini=prices[0];
		int profit=0;
		for(int i=0;i<n;i++)
		{	
			cost=prices[i]-mini;
			profit=max(profit,cost);
			mini=min(mini,prices[i]);
		}
		return profit;
	}
}