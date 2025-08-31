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
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] =1; //to denote we already found sum = 0 once (so that sum - k = 0 when appears it can be added to subArray)
        int sum = 0;
        int subArray = 0;

        for (int num: nums){
            sum += num;
            if (freq.find(sum - k) != freq.end()){
                subArray += freq[sum - k];
            }
            freq[sum]++;
        }
        return subArray;
    }
};

int main() {
    vector<int> nums;
    int num;
    string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> num){
        nums.push_back(num);
    }

    int k;
    cin>>k;

    Solution sol;
    int ans = sol.subarraySum(nums, k);
    cout<<ans<<endl;
    return 0;
}