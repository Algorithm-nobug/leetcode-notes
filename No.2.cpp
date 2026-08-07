//https://leetcode.cn/problems/group-anagrams/description/?envType=study-plan-v2&envId=top-100-liked 
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hashtable;
        for(auto& i:strs){
            string key=i;
            sort(key.begin(),key.end());
            hashtable[key].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto& j:hashtable){
            ans.push_back(j.second);
        }
        return ans;
    }
};
