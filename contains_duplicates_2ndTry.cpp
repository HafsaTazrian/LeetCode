#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> list;
        
        for (int i = 0; i < nums.size(); i++){
            if (list.count(nums[i])){
                return true;
            }
            list.insert(nums[i]);
        }
        return false;
    }
};
    return 0;
}