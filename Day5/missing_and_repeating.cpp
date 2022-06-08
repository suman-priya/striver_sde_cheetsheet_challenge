#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int, int> p;
    int x = 0;
    
    for(int val: arr) {
        x = x ^ val;
    }
    for(int i = 1; i <=n; i++) {
        x = x ^ i;
    }
    int rsbm = x & -x;
    
    int a = 0, b = 0;
    for(int val: arr) {
        if((val & rsbm) == 0)
            a = a^val;
        else
            b = b^val;
    }
    for(int i = 1; i <= n ; i++) {
        if((i & rsbm) == 0)
            a = a^i;
        else
            b = b^i;
    }
    for(int i = 0; i < n; i++) {
        if(a == arr[i]){
            p.second = a;
            p.first = b;
            break;
        }
        else if(b == arr[i]){
            p.first = a;
            p.second = b;
            break;
        }
    }
	return p;
}
