class Solution {
public:
    bool isPalindrome(string s) {
        if(s == ""){
            return true;
        }
        
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        string temp = filtered;
        reverse(filtered.begin(), filtered.end());
        if(temp == filtered){
            return true;
        }
        else{
            return false;
        }
    }
};
