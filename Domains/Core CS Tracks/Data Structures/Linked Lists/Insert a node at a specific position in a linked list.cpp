/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    
    
    //--------ALGO---------------
    // traverse the linked list
    // and goto the position
    // break the node which is connecting to the next node
    // create a new node and enter number
    // link previous node to the created node
    // connect the created node with the breaked node( next node)
    //--------ALGO---------------
    
    
    struct Node *temp,*cur;
    temp = new Node();
    temp->data = data;
    temp->next = NULL;
    cur = head;
    
    if(position == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        int i;
        for( i = 1; i < position; i++)
            cur = cur->next;
        
        temp->next = cur->next;
        cur->next = temp;
    }
    
    
    /*
    Node * newNode = new Node();
    Node * temp = new Node();
    newNode->data = data;
    newNode->next = NULL;
    temp = head;
    
    if( position == 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        int i = 1;
        for ( i = 1; i < position; i++ ) {
            temp = temp->next;
        }
        newNode->next = temp;
        temp->next = newNode;
    }
    */
    return head;    
}
