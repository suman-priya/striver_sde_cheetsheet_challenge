#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & arr, int m, int n, int target) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == target)
                return true;
        }
    }
    return false;
}