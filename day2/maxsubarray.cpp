class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msum=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<0){
                msum=max(msum,nums[i]);
                sum=0;
                continue;
            }
            msum=max(sum,msum);
            
           
        }
        return msum;
    }
};