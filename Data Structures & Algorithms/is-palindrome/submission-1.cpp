class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int len;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') str.push_back(tolower(s[i]));
            else if (s[i] >= 'a' && s[i] <= 'z') str.push_back(s[i]);
            else if (s[i] >= '0' && s[i] <= '9') str.push_back(s[i]);
        }
        len = str.size();
        for (int i = 0; i < s.size() / 2; i++) {
            if (str[i] != str[len-1]) return false;
            len--;
        }
        return true;
    }
};
