#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        k = k % n;
        if (k==0) return true;
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < n; ++j){
                if (mat[i][j] != mat[i][(j + k) % n]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat1 = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << (sol.areSimilar(mat1, 4) ? "true" : "false") << endl;
    vector<vector<int>> mat2 = {{1,2,1,2}, {5,5,5,5}, {6,3,6,3}};
    cout << (sol.areSimilar(mat2, 2) ? "true" : "false") << endl;
    return 0;
}