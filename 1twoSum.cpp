class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size()-1;i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] == target-nums[i]){
                    return {i,j};      //返回vector要用{}
                }
            }
        }
        return {};      //如果没找到，结果也要返回{}一个空数组
    }
};



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0;i < nums.size();i++){

            int need = target - nums[i];

            if(mp.count(need)){
                return {mp[need], i};    //mp[]返回的是下标
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};