#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <sstream> // for stringsteam

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // OPTIMAL 
        unordered_map<int, int> freq;
        vector<int> match;

        // checks for nums1
        for (int x: nums1){
            freq[x]++;
        }

        // checks for nums2
        for (int x: nums2){
            if (freq[x] > 0){       // checks if that x was only in nums1 and how many times it occured in nums2 using freq
                match.push_back(x);
                freq[x]--;          // dec no of times it occured.. as only inserted in match (bcoz it appears in both nums1 and nums2)
            }
        }

        return match;

        // NOT OPTIMAL : O(nlogn + mlogm). -- bcoz map is ordered map with complexity O(logn)
        // // for counting how many times the element occurs in the array
        // map<int, int> freq1, freq2;
        
        // // insert into map
        // for (int i = 0; i < nums1.size(); i++){
        //     freq1[nums1[i]]++;
        // }
        // for (int i = 0; i < nums2.size(); i++){
        //     freq2[nums2[i]]++;
        // }

        // // for (auto& pair : freq1) {
        // //     cout<<"FREQ1: ";
        // //     cout << pair.first << " occurs " << pair.second << " times\n";
        // // }

        // // for (auto& pair : freq2) {
        // //     cout<<"FREQ2: ";
        // //     cout << pair.first << " occurs " << pair.second << " times\n";
        // // }

        // //vector to store the matching part of both arrays
        // vector<int> match;

        // // check if exists in both loop
        // for (auto &p: freq1){
        //     int key = p.first;
        //     int value = p.second;
            
        //     if (freq2.count(key)){
        //         int times = min(value, freq2[key]);
        //         for (int i = 0; i< times; i++){
        //             match.push_back(key);
        //         }
        //     }

        // }

        // return match;

    }
};

int main() {

    vector<int> nums1;
    vector<int> nums2;
    int num;

    // can't do this.. as have to take two input strings
    // while(cin>>num){
    //     nums1.push_back(num);
    // }

    string line;

    // first string input
    getline(cin, line);
    stringstream ss1(line);
    while (ss1>>num){
        nums1.push_back(num);
    }

    // second string input
    getline(cin, line);
    stringstream ss2(line);
    while (ss2>>num){
        nums2.push_back(num);
    }

    cout<<"done; nums1: "<<endl;
    for (int value: nums1){
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<"nums2: "<<endl;
    for (int value: nums2){
        cout<<value<<" ";
    }
    cout<<endl;

    Solution sol;
    vector<int> match = sol.intersect(nums1, nums2);

    cout<<"Match: ";
    for (int value: match){
        cout<<value<<" ";
    }

    
    return 0;
}