#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    if(n == 0)
        return 1;
    else if(n == 1)
        return x%m;
	else if(n % 2 == 0) {
        long long y = modularExponentiation(x, n/2, m);
        return (int)((y*y) % m);
    }
    else
         return (int)(((long long)(x % m)*(long long)modularExponentiation(x,n-1,m)) % m);
}