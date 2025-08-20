#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // OPTIMAL: 0(1) time complexity; space complexity: 0(1)
        if (nums.empty()) return 0;

        int i = 0;
        for(int j = 1; j<nums.size(); j++){
            if (nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;

        // NOT OPTIMAL::
        // vector<int> withoutDuplicate;
        // set<int> s;

        // int len = nums.size();
        // for (int i =0; i< len; i++){
        //     if (s.count(nums[i])) continue; //complexity 0(logn)
        //     withoutDuplicate.push_back(nums[i]);
        //     s.insert(nums[i]);
        // }   // total complexity: 0(nlogn)

        // nums = withoutDuplicate;
        // len = withoutDuplicate.size();
        // return len;
        
    }
};


int main() {

    vector<int> nums;
    int num;

    while(cin>>num){
        nums.push_back(num);
    }

    
    Solution sol;
    cout<<"Output: ";
    int len = sol.removeDuplicates(nums);
    cout<<len<<endl;
    for (int i: nums){
        cout<<i;
    }
    
    return 0;
}