#include <bits/stdc++.h> 


Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    
    Node<int> *temp = new Node<int>(0);
    Node<int>* temp2 = temp;
    while(first and second) {
        if(first->data < second->data) {
            temp->next = first;
            first = first->next;
        }
        else {
            temp->next = second;
            second = second->next;
        }
        temp = temp->next;
    }
    if(first != NULL) {
        temp->next = first;
    }
    if(second != NULL)
        temp->next = second;
    return temp2->next;
    
}
