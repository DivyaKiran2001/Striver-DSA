#6 Wave Array

#include<bits/stdc++.h>
vector<int> waveFormArray(int n,vector<int> &arr){
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i+=2)
	{
		swap(arr[i],a[i+1]);
	}
	return arr;
}