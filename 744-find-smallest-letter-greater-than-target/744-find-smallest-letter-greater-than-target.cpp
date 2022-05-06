class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(auto it = upper_bound(letters.begin(), letters.end(), target);it == letters.end()) return letters.front();
        else return *it;
    }
};