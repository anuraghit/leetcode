class Solution {
public:
    int num(int n){
    int count=0;
    while(n>0){
        n /= 10;
        count++;
    }
    return count;
}
    int ans=0;
    
    int findNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(num(nums[i])%2==0){ans++;}
        }
        return ans;
    };
    
};