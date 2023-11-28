#1 Kadane's Algorithm (Maximum Subarray Sum)

class Solution{
	int maxSubArray(vector<int> &nums){
		int maxi=INT_MIN;
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=nums[i];
			if(sum>maxi){
				maxi=sum;
			}
			if(sum<0){
				sum=0;
			}
		}
		return maxi;
	}
}