//Two Sum

#include <iostream>
#include<vector>
#include <algorithm>
#include<map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
        vector<int> result;
        map<int,int>hm;
        for(int i=0;i<nums.size();i++)
        {
            if(hm.find(nums[i])!=hm.end())
            {
                result.push_back(hm[nums[i]]);
                result.push_back(i);
                return result;
            }
            else
            {
                hm[target-nums[i]]=i;
            }
        }
        
}
int main()
{
   int arr[] = {-1, 0, 1, 2, -1, -4}; 
   vector<int> result(arr, arr + sizeof(arr) / sizeof(arr[0]) );
   result=twoSum(result,-5);
   for(int i=0;i<result.size();i++)
       cout<<result[i]<<endl;
}
