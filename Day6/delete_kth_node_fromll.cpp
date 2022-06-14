#include <bits/stdc++.h> 


LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int k)
{
    LinkedListNode<int>* temp= head;
    LinkedListNode<int>* prev;
    int cnt= 0;
    while(temp) {
        temp = temp->next;
        cnt++;
    }
    if(cnt == 0 or k == 0)
        return head;
    LinkedListNode<int>* temp2 = head;
    cnt = cnt - k + 1;
    if(cnt == 1) {
        temp2 = temp2->next;
        return temp2;
    }
    else {
        while(cnt != 1){
            prev = temp2;
            temp2 = temp2->next;
            cnt--;
        }
        prev->next = temp2->next;

        return head;
    }
}