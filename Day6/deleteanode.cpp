void deleteNode(LinkedListNode<int> * node) {
    LinkedListNode<int>* temp;
    temp = node->next;
    node->data = temp->data;
    node->next=  temp->next;
}