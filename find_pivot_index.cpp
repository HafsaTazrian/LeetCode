#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <sstream>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // calc left sum
        vector<int> prefix(nums.size(), 0);
        for (int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }

        // calc right sum
        vector<int> suffix (nums.size(), 0);
        for (int i = nums.size() - 2; i >= 0; i--){
            suffix[i] = suffix[i+1] + nums[i + 1];
        }

        // compare suffix and prefix
        for (int i = 0; i < nums.size(); i++){
            if (prefix[i] == suffix[i]){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums;
    int num;
    string line;

    getline(cin, line);
    stringstream ss(line);
    while (ss >> num){
        nums.push_back(num);
    }

    Solution sol;
    int index = sol.pivotIndex(nums);

    cout<<index<<endl; 
    
    return 0;
}