#5 Find Duplicates in an Array of N+1 Integers

#Using Tortoise Haire Method

class Solution{
	int findDuplicates(vector<int> &nums)
	{
		int slow=nums[0];
		int fast=nums[0];
		do{
			slow=nums[slow];
			fast=nums[nums[fast]];
		}while(slow!=fast);
		fast=nums[0];
		while(slow!=fast)
		{
			slow=nums[slow];
			fast=nums[fast];
		}
		return slow;
	}
}