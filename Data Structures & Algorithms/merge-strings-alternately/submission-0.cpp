class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        result.reserve(word1.size() + word2.size());

        int i = 0, j = 0;
        int n = word1.size() , m = word2.size();

        while(i < n && j < m){
            result += word1[i++];
            result += word2[j++];
        }
        while (i < n) result += word1[i++];
        while (j < m) result += word2[j++];

        return result;
    }
};