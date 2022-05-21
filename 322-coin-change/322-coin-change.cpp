class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int arr[amount + 1];
        for(int i = 0; i < amount + 1; i ++){
            arr[i] = amount + 1;
        }
        arr[0] = 0;
        for(int i = 0; i <= amount; i ++){
            for(auto n:coins){
                // cout << "n = " << n << "\n";
                if(i - n < 0)
                    continue;
                arr[i] = min(arr[i], 1 + arr[i - n]);
            }
        }
        // cout << "ans = " << arr[amount] << "\n";

        return ((arr[amount] == amount + 1) ? -1 : arr[amount]);
    }
};