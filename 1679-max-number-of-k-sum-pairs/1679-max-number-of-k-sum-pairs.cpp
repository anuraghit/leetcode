class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> countmap;
        int ans=0;
        for(auto n: nums){
            if(countmap.find(k-n) != countmap.end() && countmap[k-n]>0){
                countmap[k-n]--;
                ans++;
            }
            else{countmap[n]++;}
        }
        return ans;
    }
};