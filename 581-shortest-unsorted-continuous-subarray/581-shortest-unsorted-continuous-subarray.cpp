class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> ans;
        ans = nums;
        sort(ans.begin(),ans.end());
        int start=nums.size(),end=0;
        for(int i=0;i<nums.size();i++){
            if(ans[i] != nums[i]){
                start = min(start,i);
                end = max(end,i);
            }
        }
        if(end-start<0){return 0;}
        else{
            return end - start +1;
        }
    }
};