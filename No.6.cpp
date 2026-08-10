#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> us;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            //丢掉相等的数字
            if(i>0&&nums[i]==nums[i-1]){continue; }
            int j=i+1,k=n-1;
            while(k>j){
                if(nums[i]+nums[j]+nums[k]==0){
                    us.emplace_back(vector<int>{nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                while(k>j&&nums[k]==nums[k+1]){k--;} 
                while(k>j&&nums[j]==nums[j-1]){j++;}    
                }
                else if(nums[i]+nums[j]+nums[k]>0){k--;} 
                else {j++;}
                }}        
    return us;
    }
};
