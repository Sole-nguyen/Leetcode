#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ValueToIndex;
        for (int i = 0; i < nums.size(); ++i) {
            int currentNums = nums[i];
            int complement = target - currentNums;
            if (ValueToIndex.find(complement) != ValueToIndex.end()){
                return {ValueToIndex[complement], i};
            }
            ValueToIndex[currentNums] = i;
        }
        return {};
    }
};

int main(){
    Solution1 sol1;
    Solution2 sol2;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
        vector<int> result1 = sol1.twoSum(nums, target);
    vector<int> result2 = sol2.twoSum(nums, target);
    for (int i : result1) cout << i << " ";
    for (int i : result2) cout << i << " ";
    return 0;
}