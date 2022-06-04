#include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int> &a, int n)
{
    int ptr1 = -1,ptr2 = -1;
    for(int i = n-2; i >= 0; i--) {
        if(a[i] < a[i+1]) {
            ptr1 = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(a[ptr1] < a[i]) {
            ptr2 = i;
            break;
        }
    }
    if(ptr1 == -1){
        reverse(a.begin(), a.end());
        return a;
    }
    swap(a[ptr1], a[ptr2]);
    vector<int>::iterator it = a.begin();
    advance(it,ptr1+1);
    reverse(it, a.end());
    return a;
}