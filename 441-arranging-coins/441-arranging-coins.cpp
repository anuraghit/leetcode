class Solution {
public:
    int arrangeCoins(int n) {
        int ans=1;
        while(n>=ans){
            n -= ans ;
            ans++;
        }
        return ans-1;
    }
};