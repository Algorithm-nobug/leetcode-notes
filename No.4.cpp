//https://leetcode.cn/problems/move-zeroes/description/?envType=study-plan-v2&envId=top-100-liked
#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        while(r<nums.size()){
            if(nums[r]){
                swap(nums[l],nums[r]);
                l++;
            }
            r++;
        }
    }
};
//Ë«Ö¸Õë·¨ 
