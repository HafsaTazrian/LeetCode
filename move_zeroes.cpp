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

    // optimal: time complexity: 0(N) and space complexity 0(1)
    // two pointer 
    void moveZeroes(vector<int>& nums) {
        int i = 0; 
        int temp;
        for (int j = 1; j < nums.size(); j++){
            if (nums[i] == 0 && nums[j] == 0){  // both zero case
                continue;     
            } 
            else if (nums[i] == 0 && nums[j] != 0){      // only first one zero: swap
                temp = nums[j];
                nums[j] = nums[i];
                nums[i++] = temp;
            }   else {     // none zero
                i++;   
            }
               
        }
        
    }
};

int main() {

    vector<int> nums;
    int num;

    while(cin>>num){
        nums.push_back(num);
    }

    Solution sol;
    sol.moveZeroes(nums);

    for (int no: nums){
        cout<<no<<" ";
    }
    
    return 0;
}