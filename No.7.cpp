//https://leetcode.cn/problems/trapping-rain-water/?envType=study-plan-v2&envId=top-100-liked
#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=int(height.size())-1;
        int leftmax=height[l],rightmax=height[r];
        int count=0;
        while(l<r){
            leftmax=max(leftmax,height[l]);
            rightmax=max(rightmax,height[r]);
            if(height[l]<height[r]){
                count+=leftmax-height[l];
                l++;
            }
            else{
                count+=rightmax-height[r];
                r--;
            }
        }
return count;
    }
};
