/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    
    Node *current = new Node;
    Node *temp = head;
    current -> data = data;
    current -> next = NULL;
    
    if( temp == NULL) {
        return current;
    }
    else {
        while(temp -> next != NULL ) {
            temp = temp -> next;
        }
        temp -> next = current;
        return head;
    }
    
}
