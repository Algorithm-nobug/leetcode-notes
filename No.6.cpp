//https://leetcode.cn/problems/container-with-most-water/?envType=study-plan-v2&envId=top-100-liked
#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int p=0,q=height.size()-1; 
        int maxarea=0;
        while(p<q){
            int area=(q-p)*min(height[p],height[q]);
            maxarea=max(maxarea,area);
            if(height[p]>=height[q]){
                q--;
            }
            else{
                p++;
            }
        }
        return maxarea;
    }
};
