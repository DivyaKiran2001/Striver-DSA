#6 Longest Increasing Subsequence


int f(int ind,int prev_ind,int arr[],int n)
{
	if(ind==n) return 0;
	
	//not take
	int len=0+f(ind+1,prev_ind,arr,n);
	//take
	if(prev_ind== -1 || arr[ind]> arr[prev_ind])
	{
		len=max(len,1+f(ind+1,ind));
	}
	return len;
}


int LIS(int arr[],int n)
{
	return f(0,-1,arr,n);
}