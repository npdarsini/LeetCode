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
     
 
    if(head != NULL)
    {
          Node* temp = head;
               
        while( temp-> next != NULL)
        {
            temp = temp->next;
        }
        
        Node* temp1= new Node();
          temp->next = temp1;     
        temp1->data = data;
        temp1->next = NULL;
       
        return head;

  }
    else
    {
        
        Node* temp1 = new Node();
        temp1->data = data;
        temp1->next = NULL;
        
        return temp1;

    }
  
    
}
