class Solution {
public:
    int countPairs(vector<int>& del) {
        unordered_map<int,int> q;
        long long ans=0;
        for(int x : del){
            for(int i=1;i<=(1<<22);i*=2){
                if(q.count(i-x)){ans += q[i-x];}
            }
            q[x]+=1;
        }
        return ans %(int)(1e9 +7);
    }
};