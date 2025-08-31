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
    bool containsDuplicate(vector<int>& nums) {
        // ONE WAY: USING MAP AND COUNTING HOW MANY TIMES IT APPEARED
        // unordered_map<int,int> freq;

        // for (int i = 0; i < nums.size(); i++){
        //     freq[nums[i]]++;
        // }

        // for (auto &p: freq){
        //     if (p.second> 1){
        //         return true;
        //     }
        // }
        // return false;

        // ANOTHER WAY
        unordered_map<int,int> freq;
        for (int i = 0; i < nums.size(); i++){
            if (freq.find(nums[i]) != freq.end()){
                return true;
            }
            freq[nums[i]]++;

        }
        return false;
    }
};
int main() {
    vector<int> nums;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>> num)
    {
        nums.push_back(num);
    }
    
    Solution sol;
    bool answer = sol.containsDuplicate(nums);
    if (answer == true) cout <<"True"<<endl;
    else if (answer == false) cout<<"False"<<endl;
    return 0;
} 