#include <bits/stdc++.h> 

Node *firstNode(Node *head)
{
    while(head) {
        if(head->data == -1) {
            return head;
        }
        else{
            head->data = -1;
        }
        head = head->next;
    }
    return NULL;
}