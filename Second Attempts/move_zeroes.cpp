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
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++){
            if (nums[i] == 0 && nums[j] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            else if (nums[i] == 0 && nums[j] == 0)   continue;
            else    i++;

        }
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
    sol.moveZeroes(nums);

    for (int n: nums){
        cout<<n<<" ";
    }
    return 0;
}