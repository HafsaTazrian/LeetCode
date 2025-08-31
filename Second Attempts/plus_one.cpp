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
    vector<int> plusOne(vector<int>& digits) {
        int carry  = 1;
        for (int i = digits.size() - 1; i >= 0; i--){
            int sum = digits[i] + carry;
            digits[i] = sum%10;
            carry = sum/10;
            if (carry == 0) return digits;
        }

        // carry still not 0
        digits.insert(digits.begin(), 1);
        return digits;

    }
};

int main() {
    vector<int>digits;
    int num;
    string line;
    getline(cin, line);
    stringstream ss1(line);
    while(ss1>> num){
        digits.push_back(num);
    }    

    Solution sol;
    vector<int> answer = sol.plusOne(digits);
    for (int x: answer){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}