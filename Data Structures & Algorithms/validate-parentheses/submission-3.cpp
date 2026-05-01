class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        char c;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') S.push(s[i]);
            else {
            if (S.empty()) return false;
            c = S.top();
            if (s[i] == ')' && c != '(') return false;
            if (s[i] == '}' && c != '{') return false;
            if (s[i] == ']' && c != '[') return false;
            S.pop();
        }
    }
    if (S.empty())return true;
    else return false;
}
};