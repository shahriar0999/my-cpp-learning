//https://leetcode.com/problems/longest-common-prefix/?envType=problem-list-v2&envId=array

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans="";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];

        int n = min(first.size(), last.size());

        for (int i=0; i < n; i++){
            if (first[i] != last[i]){
                return ans;
            }
            ans += first[i];
        }
        return ans;
        
    }
};