#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = 1000000005,maxi = 0;
    for(int i = 0; i < prices.size(); i++) {
        mini = min(mini, prices[i]);
        maxi = max(maxi, prices[i]-mini);
    }
    return maxi;
}