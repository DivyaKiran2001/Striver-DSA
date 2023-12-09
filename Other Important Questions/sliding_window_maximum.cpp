#Sliding Window Maximum
#Using Dequeue

class Solution
{
	vector<int> maxSlidingWindow(vector<int> & nums,int k)
	{
		deque<int> dq;
		vector<int> ans;
		for(int i=0;i<nums.size();i++)
		{
			//Out of boundary conditions
			
			if(!dq.empty() && dq.front()== i-k)
			{
				dq.pop_front();
			}
			
			//Check for lesser elements than the current element
			while(!dq.empty() && nums[dq.back()]<=nums[i]){
				dq.pop_back();
			}
			dq.push_back(i);
			
			//add to the ans vector
			if(i>=k-1)
				ans.push_back(nums[dq.front()]);
		}
		return ans;
	}
}