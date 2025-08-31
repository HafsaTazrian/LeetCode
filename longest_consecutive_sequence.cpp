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
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())   return  0;
         
        // sorting and removing duplicates
        vector<int> uniq = nums;
        sort(uniq.begin(), uniq.end());
        auto it = unique(uniq.begin(), uniq.end());
        uniq.erase(it, uniq.end());

        int currLen = 1;
        int maxLen = 1;
        // check if consecutive numbers are present
        for (int j = 1; j < uniq.size(); j++){
            if (uniq[j] == uniq[j-1] + 1){
                currLen++;
            }
            else  currLen = 1;
            maxLen = max(currLen, maxLen);
        }
        return maxLen;
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
    int value = sol.longestConsecutive(nums);
    cout<<value<<endl;
    return 0;
}