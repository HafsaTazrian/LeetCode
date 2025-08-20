#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include<sstream>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // OPTIMAL
        int current_majority =0, count =0;
        for (int num: nums){
            if (count == 0){
                current_majority = num;
            }
            count += (num == current_majority) ? 1 : -1;
        }
        return current_majority;

        // NOT OPTIMAL: TIME O(N), SPACE O(N)
        // int n = nums.size();
        // unordered_map<int,int> freq;

        // // adding the vector in map as how many times the elements appear in it
        // for (int i = 0; i < n; i++){
        //     freq[nums[i]]++;
        // }

        // // checking the map for which element's second is greater than floor(n/2)
        // for (int i = 0; i < n; i++){
        //     if (freq[nums[i]] > (n/2)){
        //         return nums[i];
        //     }
        // }

        // return 0;
        
    }
};

int main() {
    vector<int> nums;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>> num){
        nums.push_back(num);
    }

    Solution sol;
    int answer = sol.majorityElement(nums);

    cout<<"Output: "<<answer<<endl;
    return 0;
}