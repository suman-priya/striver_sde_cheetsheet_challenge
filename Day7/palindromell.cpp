#include <bits/stdc++.h> 


bool isPalindrome(LinkedListNode<int> *head) {
    int n = 0;
    LinkedListNode<int> * temp;
    temp = head;
    while(temp) {
        temp = temp->next;
        n++;
    }
    if(n <= 1)
        return true;
    int m = n;
    long long sum = 0;
    while(m > 0){
    if(n % 2== 0) {
        if(m <= n/2) {
            sum -= head->data;
            m--;
        }
        else {
            sum += head->data;
            m--;
        }
    }
    else if(n % 2 != 0) {
        if(m == n/2+1){
            m--;
        }
        else if(m > n/2) {
            sum += head->data;
            m--;
        }
        else {
            sum -= head->data;
            m--;
        }
    }
        head = head->next;
    }
    if(sum)
        return false;
    return true;
}