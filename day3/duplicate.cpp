class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        for(auto&a:ump){
            if(a.second>1){return a.first;}
        }
        return 0;
    }
   
};