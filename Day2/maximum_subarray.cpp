#include <bits/stdc++.h> 
long long maxSubarraySum(int a[], int n)
{
    long long maxi = 0, lmax = -9999999;
    for(int i = 0; i < n; i++) {
        if(a[i] + lmax > a[i]) {
            lmax += a[i];
        }
        else {
            lmax = a[i]; 
        }
        maxi = max(maxi, lmax);  
    }
    return maxi;
}