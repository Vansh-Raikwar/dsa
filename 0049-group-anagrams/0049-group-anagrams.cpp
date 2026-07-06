class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> umap;

        for(auto x:strs){
            string t = x;   // temp -> t
            sort(x.begin(),x.end());
            umap[x].push_back(t);
        }
        for(auto i:umap){
            ans.push_back(i.second);
        }
        return ans;
    }
};