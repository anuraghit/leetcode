class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int out =0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                out += 1;
                ans = max(out,ans);
            }
            else{out =0;}
        }
        return ans;
    }
};