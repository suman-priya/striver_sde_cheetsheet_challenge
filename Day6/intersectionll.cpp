#include <bits/stdc++.h> 
int findIntersection(Node *firstHead, Node *secondHead)
{
    int n, m;
    while(firstHead->next != NULL) {
        firstHead = firstHead->next;
    }
    while(secondHead->next != NULL) {
        secondHead = secondHead->next;
    }
    if(n == m) {
        return m;
    }
    else
        return -1;
}