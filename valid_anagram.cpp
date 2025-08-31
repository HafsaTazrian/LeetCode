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
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for(int i = 0; i < s.size(); i++){
            freq1[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++){
            freq2[t[i]]++;
        }

        if (freq1 == freq2)     return true;
        return false;
    }
};


int main() {
    string s;
    string t;

    getline(cin, s);
    getline(cin, t);

    Solution sol;
    bool answer = sol.isAnagram(s, t);

    if (answer == true){
        cout<<"True"<<endl;
    }
    else
        cout<<"False"<<endl;
    
    

    return 0;
}