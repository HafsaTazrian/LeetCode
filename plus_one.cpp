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
    vector<int> plusOne(vector<int>& digits) {
        // OPTIMAL:
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--){
            int sum = digits[i] + carry;
            digits[i] = sum%10;
            carry = sum/10;
            if (carry == 0) return digits;
        }

       // if carry still present
        digits.insert(digits.begin(), 1);
        return digits;
      


        // WORKS:       // bcoz 
        // int carry = 1;
        // for (int i = digits.size() - 1; i >= 0; i--){
        //     int sum = digits[i] + carry;
        //     digits[i] = sum%10;
        //     carry = sum/10;
        //     if (carry == 0) break;
        // }

        // if (carry){
        //     digits.insert(digits.begin(), carry);        // shifted all elements tai not optimal
        // }
        
        // return digits;




        // NOT OPTIMAL AND DOESN"T WORK WHEN TOO BIG ARRAY
        // string s = "";

        // // cout<< "DIGITS ARRAY: ";
        // // for (int i = 0; i < digits.size(); i++){
        // //     cout<<digits[i];
        // // }
        // // cout << endl;

        // for (int i = 0; i < digits.size(); i++){
        //     s.push_back(digits[i] + '0');
        // }

        // // cout<<"STRING: "<< s<< endl;;

        // long long num = stoll(s);       // here stoi(s) is used for 32 bits and stoll(s) used for 64 bits
        // num = num + 1;
        // s = to_string(num);

        // // cout<<"NUM: "<<s<<endl;


        // vector<int> plusOne;

        // for(int i = 0; i < s.size(); i++){
        //     plusOne.push_back(s[i] - '0');
        // }

        // return plusOne;
        
    }
};

int main() {
    vector<int> digits;
    int num;
    string line;
    getline(cin, line );
    stringstream ss1(line);
    while (ss1>>num){
        digits.push_back(num);
    }

    vector<int> plusOne;

    Solution sol;
    plusOne = sol.plusOne(digits);

    for (int x: plusOne){
        cout<<x<<" ";
    }

    return 0;
}