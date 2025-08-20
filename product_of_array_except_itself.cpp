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
    vector<int> productExceptSelf(vector<int>& nums) {
        // OPTIMAL
        vector<int> answer(nums.size());
    
        // product of all elements b4 i
        for (int i = 0, prefix = 1; i < nums.size(); i++){
            answer[i] = prefix;
            prefix *= nums[i];
        } 

        // product of all elements after i
        for (int i = nums.size() - 1, suffix = 1; i >= 0; i--){
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;


        // 23% beaten
        // int n = nums.size();
        // vector<int> answer(n, 1);

        // // product of all elements b4 i
        // int prefix = 1;
        // for (int i = 0; i < nums.size(); i++){
        //     answer[i] = prefix;
        //     prefix *= nums[i];
        // } 

        // // product of all elements after i
        // int suffix = 1;
        // for (int i = nums.size() - 1; i >= 0; i--){
        //     answer[i] *= suffix;
        //     suffix *= nums[i];
        // }

        // return answer;
        
    }
};

int main() {
    vector<int> nums;
    int num;
    string line;
    getline(cin,line);
    stringstream ss1(line);
    while(ss1>>num){
        nums.push_back(num);
    }

    Solution sol;
    vector<int> answer;
    answer = sol.productExceptSelf(nums);
    cout<<"Answer: ";
    for (int x: answer){
        cout<<x<<" ";
    }
    return 0;
}