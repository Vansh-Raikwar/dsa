class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> umap;

        for(auto x:strs){
            vector<int> freq(26,0);
            for(char c:x){
                freq[c-'a']++;

            }
            string key="";
            for(int j:freq){
                key+=to_string(j)+"$";
            }
            umap[key].push_back(x);
        }
        for(auto i:umap){
            ans.push_back(i.second);
        }
        return ans;
    }
};