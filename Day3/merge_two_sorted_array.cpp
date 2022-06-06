#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int z = arr1.size()-1;
	for(int i = m-1,j = n-1; i >= 0, j>=0;) {
         if(arr1[i] > arr2[j]) {
             arr1[z] = arr1[i];
             i--;
         }   
        else{
            arr1[z] = arr2[j];
            j--;
        }
        z--;
    }
    return arr1;
}