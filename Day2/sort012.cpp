#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int cnt0 = 0, cnt1 = 0, cnt2 = 0;
   for(int i = 0; i < n; i++) {
       if(arr[i] == 0)
           cnt0++;
       else if(arr[i] == 1)
           cnt1++;
       else
           cnt2++;
   }
    int i = 0;
    while(cnt0--) {
        arr[i] = 0;
        i++;
    }
    while(cnt1--) {
        arr[i] = 1;
        i++;
    }
    while(cnt2--) {
        arr[i] = 2;
        i++;
    }
}