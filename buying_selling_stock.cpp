#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>

using namespace std;

    // optimal soln
    class Solution{
        public:
        int maxProfit(vector<int> &prices){
            int minPrices = INT_MAX;
            int maxProfit = 0;

            for (int price: prices){
                minPrices = min(minPrices, price);
                maxProfit = max(maxProfit, price - minPrices);
            }

            return maxProfit;
        }
    };


    // main leetcode part
    // works but not optimal
//     class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         vector<int> price = prices;
//         sort(price.begin(), price.end());
//         int len = prices.size();
//         cout<<"len: "<<len<<endl;

//          // see price
//         for (int i = 0 ; i < len; i++){
//             cout<<price[i];
//         }
//         cout<<endl;

//         // order for price
//         vector<int> order(len);
//         set<int> s;

//         for (int j = 0; j < len; j++){      // price
//             for (int i = len-1; i >= 0; i--){      //prices
//                 // if (prices[i] == price[j] ){ 
//                 //     if (find(order.begin(), order.end(), i) != order.end()){    // checks if it already in order or not
//                 //         continue;
//                 //     } else{
//                 //         order.insert(order.begin() + j,i);          //inserting in order i(prices postion) at index j(price postion)
//                 //         break;
//                 //     }
//                 // }
//                 if (prices[i] == price[j] ){ 
//                         if (s.count(i)) continue;   // for checking if already in order
//                         order.insert(order.begin() + j,i);          //inserting in order i(prices postion) at index j(price postion)
//                         s.insert(i);
//                         break;
                    
//                 }


//             } 
//         }


//          // see order
//         for (int i = 0 ; i < len; i++){
//             cout<<order[i];
//         }
//         cout<<endl;

//         // checking
//         vector<int> profit;
//         // bool done = false;
//         for (int j = 0; j < len-1 ; j++){
//             for (int k = len-1; k > j; k--){
//                 cout<<"J: "<<j<<" k: "<<k<<endl;
//                 if (order[k] > order[j]){
//                     cout<<"INside loop:: J: "<<j<<" k: "<<k<<endl;
//                     cout<<"priceJ: "<<price[j]<<" priceK: "<<price[k]<<endl;
//                     // return price[k] - price[j];
//                     int profitPrice = price[k] -price[j];
//                     profit.push_back(profitPrice);
//                     // done = true;
//                     // break;
//                 }
//             }
//         }

//         if (!profit.empty()){
//             sort(profit.begin(), profit.end());
//             return profit.back();
//         }
        
//         return 0;
//     }
   
// };



int main() {
    vector<int> prices;
    
    // taking input prices
    int num;
    while (cin>>num){
        prices.push_back(num);
    }
     
    Solution sol;
    cout<<"Output: "<<sol.maxProfit(prices)<< endl;

    return 0;
}

