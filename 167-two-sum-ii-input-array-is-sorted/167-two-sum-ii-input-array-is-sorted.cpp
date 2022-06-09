class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<numbers.size();i++){
            if(m.count(target-numbers[i])){
                ans.push_back(m[target-numbers[i]]+1);
                ans.push_back(i+1);
                break;
            }
            m[numbers[i]]=i;
        }
        return ans;
    }
};