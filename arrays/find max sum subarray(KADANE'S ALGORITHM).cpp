// Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 

//BRUTE FORCE APPROACH
#include<iostream>
using namespace std;
int find(int *arr,int n)
{
	long int sum;
	long int max_sum=INT_MIN;
	for (int i=0;i<n;i++)
	{
		sum=0 ;
		for(int j=i;j<n;j++)
		{
			sum=sum+arr[j];
			if(sum>max_sum)
			max_sum=sum;
			
			
		}
	}
	return max_sum;
}
int main()
{
	int size;
	cout<<"enter the size f the array:";
	cin>>size;
	int *arr= new int [size];
	cout<<"enter the elements into the array:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<find(arr,size);
}


// USING KADANE'S ALGORITHM

 int maxSubArray(vector<int>& nums) 
 {
    int cur_sum=0;
    int max_so_far=INT_MIN;
  for(int i=0;i<nums.size();i++)
  {
	  cur_sum=cur_sum+nums[i];
	  if(cur_sum>max_so_far )
	  max_so_far=cur_sum;
	  if(cur_sum<0)
	  cur_sum=0;
  }
 return max_so_far;
}
