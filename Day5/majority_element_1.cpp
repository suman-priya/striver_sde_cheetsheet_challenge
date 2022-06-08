#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int cnt = 0, current;
    for(int i = 0; i < n; i++) {
        if(cnt == 0){
            current = arr[i];
            cnt++;
        }
        else if(current != arr[i]) {
            cnt--;
        }
        else if(current == arr[i]) {
            cnt++;
        }
    }
    cnt = 0;
    for(int i = 0; i < n; i++) {
        if(current == arr[i])
            cnt++;
    }
    if(cnt > n/2)
    return current;
    else 
        return -1;
}