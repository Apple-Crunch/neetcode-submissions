class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long int num = 0; // overflow
        vector<int> V;
        for(int i=0; i<digits.size();i++) {
            num += digits[i];
            if(i < digits.size()-1) num*=10;
        }
        num++;
        while(num > 9){
            V.push_back(num%10);
            num /= 10;
        }
        V.push_back(num);
        reverse(V.begin(), V.end());
        return V;
    }
};
