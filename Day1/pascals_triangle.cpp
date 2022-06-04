#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> vv;
    vector<long long int> v;
    v.push_back(1);
    vv.push_back(v);
    if(n == 1)
        return vv;
    v.push_back(1);
    vv.push_back(v);
    if(n == 2)
        return vv;
    v.clear();
    for(int i = 2; i < n; i++) {
        v.push_back(1);
        for(int j = 1; j < i; j++){
            v.push_back(vv[i-1][j-1] + vv[i-1][j]);
        }
        v.push_back(1);
        vv.push_back(v);
        v.clear();
    }
    return vv;
    
}
