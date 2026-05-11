class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        sort(strs.begin(), strs.end());
        string f = strs[0];
        string l = strs[strs.size()-1];
        int n = min(f.size(), l.size());
        for(int i=0; i<n; i++){
            if(f[i]==l[i]) res+= f[i];
            else break;
        }
        return res;
    }
};