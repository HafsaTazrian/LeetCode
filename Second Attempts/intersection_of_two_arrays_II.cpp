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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;
        unordered_map<int, int> freq;

        for (int num: nums1){
            freq[num]++;
        }

        for (int num: nums2){
            // if (freq.find(num) != freq.end()){ // this doesn't work bcoz freq.second can be neg
            if (freq[num] > 0 ){
                freq[num]--;
                intersect.push_back(num);
            }
           
        }

        return intersect;
    }
};

int main() {
    vector<int> nums1;
    vector<int> nums2;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>>num)
    {
        nums1.push_back(num);
    }

    getline(cin, line);
    stringstream ss2(line);
    while (ss2>>num)
    {
        nums2.push_back(num);
    }

    Solution sol;
    vector<int> match = sol.intersect(nums1, nums2);

    for (int x: match){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    return 0;
}