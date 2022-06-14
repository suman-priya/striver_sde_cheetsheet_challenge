#include <bits/stdc++.h> 


Node *addTwoNumbers(Node *head1, Node *head2)
{
    int carry = 0;
    Node* res;
    int n = 0, m = 0;
    Node* temp1 = head1, *temp2 = head2;
    Node* sl;
    while(temp1) {
        temp1 = temp1->next;
        n++;
    }
    while(temp2) {
        temp2 = temp2->next;
        m++;
    }
    if(m > n) {
        temp1 = head1;
        head1 = head2;
        head2 = temp1;
    }
    res = head1;
    while(head1 and head2) {
        if(carry + head1->data + head2->data > 9) {
            head1->data = (carry + head1->data+ head2->data) % 10;
            carry = 1;
            
        }
        else {
            head1->data = carry + head1->data + head2->data;
            carry = 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1){
        if(carry + head1->data > 9){
            head1->data = (head1->data + carry)%10;
            carry = 1;
        }
        else {
            head1->data = carry + head1->data;
            carry = 0;
        }
        head1 = head1->next;
    }
    if(carry > 0) {
        Node* news = res;
        while(news->next != NULL) {
            news = news->next;
        }
        Node* store = new Node(1);
        news->next = store;
        news->next->next = NULL;
    }
    return res;
}