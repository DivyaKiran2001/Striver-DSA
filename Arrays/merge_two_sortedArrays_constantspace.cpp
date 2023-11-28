#4 Merge Two Sorted Arrays without Using Extra Space

#Using Gap Method(Shell Sort Algorithm)

class Solution{
	private:
		void SwapIfGreater(){
		}
		
	public:
		void merge(long long arr1[],long long arr2[],int n,int m)
		{
			int len=(n+m);
			int gap=(len/2)+(len%2);
			while(gap>0)
			{
				int left=0;
				int right=left+gap;
				while(right<len){
					if(left<n && right>=n){
						//arr1 and arr2
						swapIfGreater(arr1,arr2,left,right-n);
					}
					else if(left=>n){
						//arr2 and arr2
						swapIfGreater(arr2,arr2,left-n,right-n);
					}
					else{
					//arr1 and arr2
						swapIfGreater(arr1,arr1,left,right);
					}
					left++;
					right++;
				}
				if(gap==1) break;
				else gap=(gap/2)+(gap%2);
			}
		}
}