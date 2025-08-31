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
    int maxProfit(vector<int>& prices) {
        // more optimal
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice)
                minPrice = prices[i];
            else
                maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;

        // OPTIMAL .... BUT STILL
        // int maxProfit = 0;
        // int minPrices = INT_MAX;

        // for (int price: prices){
        //     minPrices = min(minPrices, price);
        //     maxProfit = max(maxProfit, price - minPrices);
        // }
        // return maxProfit;
    }
};

int main() {
    vector<int> prices;
    int num;
    string line;

    getline(cin, line);
    stringstream ss1(line);
    while (ss1>>num)
    {
        prices.push_back(num);
    }

    Solution sol;
    int answer = sol.maxProfit(prices);

    cout<<answer<<endl;
    
    return 0;
}