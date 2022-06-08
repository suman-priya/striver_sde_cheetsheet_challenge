#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> v;
    int n = arr.size();
    int cnt1 = 0, cnt2 = 0, el1 = -1 ,el2 = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(el1 == arr[i]) {
            cnt1++;
        }
        else if(el2 == arr[i]) {
            cnt2++;
        }
        else if(cnt1 == 0) {
            el1 = arr[i];
            cnt1++;
        }
        else if(cnt2 == 0) {
            el2 = arr[i];
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(el1 == arr[i]){
            cnt1++;
        }
        else if(el2 == arr[i]){
            cnt2++;
        }
    }
    if(cnt1 > n/3) {
        v.push_back(el1);
    }
    if(cnt2 > n/3) {
        v.push_back(el2);
    }
    return v;
}