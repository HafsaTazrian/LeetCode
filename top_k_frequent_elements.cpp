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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> answer;

        for (int num: nums){
            map[num]++;
        }

        // conv map to vector
        vector<pair<int, int>> vec(map.begin(), map.end());

        // sort the vector acc to second element in pair
        sort(vec.begin(), vec.end(), [](auto &a, auto & b){
            return a.second > b.second;
        });

        // insert first k highest in answer
        for (int i = 0; i < k && i < vec.size(); i++){
            answer.push_back(vec[i].first);
        }

        return answer;
    }
};

int main() {
    vector<int> nums;
    int k;
    int num;
    string line;

    getline (cin, line);
    stringstream ss(line);
    while (ss >> num){
        nums.push_back(num);
    }
    cin>> k;
    
    Solution sol;
    vector<int> answer = sol.topKFrequent(nums, k);

    for(int x: answer){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}