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
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 0 ; j < nums.size(); j++){
            if (nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};

int main() {
    vector<int> nums;
    string line;
    int num;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>>num)
    {
        nums.push_back(num);
    }

    Solution sol;
    int answer = sol.removeDuplicates(nums);
    cout<<answer<<endl;
    
    return 0;
}