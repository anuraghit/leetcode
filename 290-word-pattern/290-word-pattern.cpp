class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string>v;
        
        stringstream iss(s);
        string word;
        
        while(iss>>word){
            v.push_back(word); //add all words in s to a vector
        }
        if(pattern.size()!=v.size())
            return false;
        
        map<char,string> mp;
        for(int i=0;i<pattern.size();i++){
            char ch =pattern[i];
            if(mp.find(ch)!=mp.end())//if character from pattern already in map
            {
                if(mp[ch]!=v[i]) //and if that character is not mapped to the word,then incorrect
                    return false;
                
            }
            else
            {
                for(auto it:mp)
                {
                    if(it.second==v[i]) //character is not in the map
                        return false;
                }
                mp[ch] = v[i]; //map the word to the current charchter
            }
        }
        return true;
    }
};