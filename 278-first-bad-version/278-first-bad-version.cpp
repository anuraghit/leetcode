// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int fst =1,end=n;
        while(end>=fst)
        {
            int mid = fst+(end-fst)/2;
            if(!isBadVersion(mid))
                fst = mid + 1;
            else
                end = mid - 1;
        }
        return fst;
    }
};