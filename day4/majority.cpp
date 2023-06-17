class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        for(auto&a:ump){
            if(a.second>nums.size()/2){return a.first;}
        }
        return 0;
    }
};