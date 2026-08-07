//https://leetcode.cn/problems/longest-consecutive-sequence/description/?envType=study-plan-v2&envId=top-100-liked
#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp;
        for(int p:nums){
            mp.insert(p);
        }
        int count=0;
        for(int it:mp){
            if(!mp.count(it-1)){
                int cur=it;
                int len=1;
            
            while(mp.count((cur+1))){
                len++;
                cur++;
            }
            count=max(count,len);
        }}
        return count;
    }
};
