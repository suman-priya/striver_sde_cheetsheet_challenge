#include <bits/stdc++.h> 

bool detectCycle(Node *head)
{
	while(head) {
        if(head->data != -1) {
            head->data = -1;
        }
        else if(head->data == -1) {
            return true;
        }
        head = head->next;
    }
    return false;
}