#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int res =0;
        unordered_map<char, int> roman ={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i = 0; i < s.size() - 1; i++){
            if (roman[s[i]] < roman[s[i+1]]){
                res -= roman[s[i]];
            }
            else
            {
                res += roman[s[i]];
            }
        }

        return res + roman[s[s.size() - 1]];
    }
};

int main(){
    Solution sol;
    string s1 = "III";
    cout << "Ket qua 1: " << sol.romanToInt(s1) << endl;
    string s2 = "LVIII";
    cout << "Ket qua 2: " << sol.romanToInt(s2) << endl;
    return 0;
}