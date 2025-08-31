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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0 ; i < nums.size(); i++){
            int diff = target - nums[i];
            if (mp.find(diff) != mp.end() && mp.find(diff)->second != i){
                return {mp[diff], i};
                
            }
            mp[nums[i]] = i;

        }
        return {};
    }
};



int main() {
    vector<int> nums;
    int target;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>> num){
        nums.push_back(num);
    }

    cin>>target;

    Solution sol;
    vector<int> answer = sol.twoSum(nums, target);

    for (int x: answer){
        cout<<x <<" ";
    }
    cout<<endl;
    return 0;
}