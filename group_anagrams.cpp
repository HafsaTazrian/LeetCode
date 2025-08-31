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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        // mapping same words together
        for (string &word: strs){
            string key = word;
            sort(key.begin(), key.end());
            map[key].push_back(word);
        }

        // from map to vector<vector<string>>
        vector<vector<string>> output;
        for (auto &p: map){
            output.push_back(p.second);
        }
        return output;
    }
};

int main() {
    vector<string> strs;
    string word;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    
    while(ss1>>word){
        strs.push_back(word);
    }

    Solution sol;
    vector<vector<string>> output = sol.groupAnagrams(strs);

    for (auto &group: output){
        cout<<"{";
        for (auto &word: group){
            cout<<word<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}