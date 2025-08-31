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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> answer;
        set<int> s;

        for (int i = 0 ; i < nums.size(); i++){
            s.insert(nums[i]);
        }

        for(int i = 1; i <= nums.size(); i++){
            if (s.find(i) == s.end()){
                answer.push_back(i);
            }
        }
        return answer;
        
        
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
    vector<int> answer = sol.findDisappearedNumbers(nums);
    for (int x: answer){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}