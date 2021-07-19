Linked list is defined in this way in all obove questions 

struct Node

{

    int data;
    
    struct Node* next;
     
    Node(int x){
        data = x;
        next = NULL;
    }
};
