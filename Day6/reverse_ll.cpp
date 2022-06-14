LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    int n = 0;
    LinkedListNode<int>* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        n++;
    }
    LinkedListNode<int> *curr, *prev, *nex;
    prev = NULL;
    curr = head;
    if(n > 1)
    nex = head->next;
    else if(n == 0)
        return head;
    else {
        curr->next = NULL;
        return head;
    }
    while(curr != NULL) {
        //cout<<"check"<<curr->data<<endl;
        curr->next = prev;
        prev = curr;
        if(nex != NULL)
        curr = nex;
        else{
            head = curr;
            curr = NULL;
        }
        if(nex != NULL)
        nex = nex->next;
    }
    return head;
}