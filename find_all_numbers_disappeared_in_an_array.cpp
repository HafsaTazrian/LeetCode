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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // MORE OPTIMAL
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++){
            int index = abs(nums[i]) - 1;
            nums[index] = -abs(nums[index]);  // still works without branching
            
        }

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] >0 ){
                answer.push_back(i + 1);
            }
        }

        return answer;


        // OPTIMAL
        // int n = nums.size();
        // vector<int> answer;

        // for (int i = 0; i < n; i++){
        //     int index = abs(nums[i]) -1;        // index hobe i place er number -1.. 
        //     if (nums[index] > 0){
        //         nums[index] = -nums[index];     // oi nums[index] e value neg kore dicchi.. to make sure eta paise.. already neg kora thakle don't change
        //     }
        // }

        // for (int i = 0; i < n; i++){
        //     if (nums[i] >0 ){
        //         answer.push_back(i + 1);
        //     }
        // }

        // return answer;


        // NOT OPTIMAL
        // int n = nums.size();
        // vector<int> answer;

        // for (int i = 1; i <= n; i++){
        //     bool bound = false;
        //     for (int j = 0; j < n; j++){
        //         if (nums[j] == i) {
        //             bound = true;
        //             break;
        //         }
        //     }
        //     if (!bound){
        //         answer.push_back(i);
        //     }
            
        // }

        // return answer;
    }
};

int main() {
    vector<int> nums;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while(ss1>>num){
        nums.push_back(num);
    }
    
    Solution sol;
    vector<int> answer = sol.findDisappearedNumbers(nums);
    for (int x: answer){
        cout<<x<<" ";
    }
    return 0;
}