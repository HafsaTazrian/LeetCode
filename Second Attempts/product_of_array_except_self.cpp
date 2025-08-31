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
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        for (int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        vector<int> suffix(nums.size(), 1);
        for (int i = nums.size() - 2; i >= 0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
            prefix[i] *= suffix[i];
        }
        return prefix; 
        
    }
};

int main() {
    vector<int> nums;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>>num)
    {
        nums.push_back(num);
    }

    Solution sol;
    vector<int> answer = sol.productExceptSelf(nums);

    for (int x: answer){
        cout<< x<<" ";
    }
    cout<<endl;
    return 0;
}