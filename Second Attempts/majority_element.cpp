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
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> map;
        for (int num: nums){
            map[num]++;
        }

        for (auto &p: map){
            if (p.second > nums.size()/2)   return p.first;
        }
        
        return 0;
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
    int majority = sol.majorityElement(nums);

    cout<<majority<<endl;
    
    return 0;
}