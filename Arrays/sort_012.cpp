#2 Sort an array of 0's,1's and 2's

#Using Dutch National Flag Algorithm

class Solution{
	void sortColors(vector<int> &nums){
		int low=0,mid=0,high=nums.size()-1;
		while(mid<=high){
			switch(nums[mid]){
				case 0 : swap(nums[low++],nums[mid++]);
						 break;
				case 1 : mid++;
						 break;
				case 2 : swap(num[mid],nums[high--]);
						 break;
			}
		}
	}
}