#include <bits/stdc++.h> 

int findIntersection(Node *firstHead, Node *secondHead)
{
    int n = 0, m = 0;
    int x;
    Node* temp1 = firstHead, *temp2 = secondHead;
    while(temp1) {
        temp1 = temp1->next;
        n++;
    }
    while(temp2) {
        temp2 = temp2->next;
        m++;
    }
    if(n > m) {
        x = n-m;
        while(x > 0) {
            firstHead = firstHead->next;
            x--;
        }
        while(firstHead and secondHead) {
            if(firstHead->data == secondHead->data){
                int s = firstHead->data;
                firstHead->data = -99;
                if(firstHead->data == secondHead->data)
                    return s;
            }
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }
    }
    else if(m > n) {
        x = m-n;
        while(x > 0) {
            secondHead = secondHead->next;
            x--;
        }
        while(firstHead and secondHead) {
            if(firstHead->data == secondHead->data){
                int s = firstHead->data;
                firstHead->data = -99;
                if(firstHead->data == secondHead->data)
                    return s;
            }
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }
    }
    else {
        while(firstHead and secondHead) {
            if(firstHead->data == secondHead->data){
                int s = firstHead->data;
                firstHead->data = -99;
                if(firstHead->data == secondHead->data)
                    return s;
            }
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }
    }
    return -1;
}