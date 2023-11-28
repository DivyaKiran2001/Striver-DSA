#8 Two Sum Problem

#Using Two Pointer Approach(left,right)

#include<bits/stdc++.h>
class Solution{
	string twoSum(int n,vector<int> &arr,int target)
	{
		int left=0,right=n-1;
		sort(arr.begin(),arr.end());
		while(left<right){
			int sum=arr[left]+arr[right];
			if(sum==target)
				return "YES";
			else if(sum<target)
			{
				left++;
			}
			else
				right--;
		}
		return "NO";
	}
}