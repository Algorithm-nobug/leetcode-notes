https://leetcode.cn/problems/two-sum/?envType=study-plan-v2&envId=top-100-liked
//No.1 
#include<vector>
#define table_size 10000
using namespace std;
//创建节点
typedef struct node{
    int key;
    int idx;
    node* next;
}node;
//设置哈希函数
int get_hash(int p){
    if(p<0) p=-p;
    return p%table_size;
}
//增
void add_num(int p,node* node_table[],vector<int>& nums) {//此处p是原下标,数组传入一定要加[]
    //创建新节点
    node* new_node=new node;
    new_node->idx=p;
    p=nums[p];
    //返回编号
    int index=get_hash(p);
    new_node->key=p;
    //先将新节点连接到表的前面
    new_node->next=node_table[index];
    //再将指针node_table指向新的开头
    node_table[index]=new_node;
}
//查
int find(int p,node* node_table[]){
    int index=get_hash(p);
    node* current=node_table[index];
    while(current!=NULL){
        if(p==current->key){
            return current->idx;
        }
        current=current->next;
    }
    //如果return 0就不知道到底是下标为0的数被找到了还是真的一个都没有找到
    return -1;
}
class Solution {
public:vector<int> twoSum(vector<int>& nums, int target){
    node* node_table[table_size]={NULL};
    int idx;
    for(int i=0;i<nums.size();i++){
        idx=find(target-nums[i],node_table);
        if(idx!=-1) return {idx,i};
        //将不满足条件的放入哈希表
        add_num(i,node_table,nums);
    }
    return {};
    }   };
/* for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]==target-nums[i]){
                return {i,j};
                }}return {};
*/
