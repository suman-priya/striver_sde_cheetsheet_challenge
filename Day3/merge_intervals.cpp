#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

bool comp(const vector<int> &a, const vector<int> &b) {
    return (a[0] < b[0]);
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), comp);
    stack<vector<int>> s;
    s.push(intervals[0]);
    vector<int>v;
    for(int i = 1; i < intervals.size(); i++) {
        if(intervals[i][0] <= s.top()[1]) {
            v.push_back(s.top()[0]);
            v.push_back(max(intervals[i][1], s.top()[1]));
            s.pop();
            s.push(v);
            v.clear();
        }
        else
            s.push(intervals[i]);
    }
    intervals.clear();
    while(!s.empty()) {
        intervals.push_back(s.top());
        s.pop();
    }
    sort(intervals.begin(), intervals.end(), comp);
    return intervals;
}
