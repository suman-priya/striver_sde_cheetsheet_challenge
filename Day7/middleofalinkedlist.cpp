Node *findMiddle(Node *head) {
    Node* temp = head;
    int n = 0;
    while(temp != NULL) {
        temp = temp->next;
        n++;
    }
    if(n % 2== 0)
        n = n/2;
    else
        n = n/2;
   // cout<<n<<endl;
    while(n != 0 and head != NULL) {
        head = head->next;
        n--;
    }
    return head;
}