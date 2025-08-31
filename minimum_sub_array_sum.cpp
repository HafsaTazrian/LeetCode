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
    int minSubArrayLen(int target, vector<int>& nums) {
        // OPTIMAL
        int left =0, sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < nums.size(); right++){
            sum += nums[right];
            while ( sum >= target){
                minLen = min (minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (minLen == INT_MAX) ? 0: minLen;

        // NOT OPTIMAL: TIME & SPACE COMPLEXITY : O(N^2)
        // unordered_map<int, vector<int>> subArray;
        // int i = 0;

        // // check if first element already greater than target
        // if (nums[i] >= target)  return 1;

        // // if not...
        // subArray[i].push_back(nums[i]);
        // int sum = nums[i];
        // int minLen = INT_MAX;

        // for(int j =  i + 1; j < nums.size(); j++){
        //     sum += nums[j];
        //     subArray[i].push_back(nums[i]);
           
        //     if (sum >= target){
        //         minLen = min(minLen, (int)subArray[i].size());
        //         subArray.erase(i);
        //         i++;
        //          // check if first element already greater than target
        //         if (nums[i] >= target)  return 1;
        //         sum = nums[i];
        //         subArray[i].push_back(nums[i]);
        //         j = i;
        //     }
        //     if (j == nums.size() -1 && sum < target){
        //         subArray.erase(i);
        //     }
            
            
        // }
        // // finds no subarray whose sum >= target
        // if (minLen == INT_MAX) return 0;
        // // else
        // return minLen;
    }
};


int main() {
    vector<int> nums;
    int target;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    ss1>>target;
    
    getline(cin, line);
    stringstream ss2(line);
    while( ss2>> num){
        nums.push_back(num);
    }
 
    Solution sol;
    int ans = sol.minSubArrayLen(target, nums);
    cout<<ans<<endl;
    return 0;
}