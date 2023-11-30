#3 Stickler Thief (Maximum Sum of Non Adjacent Elements)

 int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n,0);
        dp[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            int pick=arr[i];
            if(i>1){
                pick+=dp[i-2];
            }
            int not_pick=0+dp[i-1];
            dp[i]=max(pick,not_pick);
        }
        return dp[n-1];
    }