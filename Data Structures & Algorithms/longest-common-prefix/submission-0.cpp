class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.empty()) return result;

        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (const string& s : strs) {
                if (i == s.size() || s[i] != c) {
                    return result;
                }
            }
            result += c;
        }
        return result;
    }
};