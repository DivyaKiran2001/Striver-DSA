#7 Majority Element(>N/2 Times)

#Using Moore's Voting Algorithm

class Solution{
	int majorityElement(vector<int> &nums)
	{
		int count=0;
		int ele;
		for(int i=0;i<nums.size();i++)
		{
			if(count==0)
			{
				count=1;
				ele=nums[i];
			}
			else if(nums[i]==ele){
				count++;
			}
			else{
				count--;
			}
		}
		int count1=0;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]==ele)
				count1++;
		}
		if(count1>nums.size()/2)
		{
			return ele;
		}
		return -1;
	}
}