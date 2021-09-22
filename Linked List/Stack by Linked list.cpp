#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
   Node(){
       next=NULL;
   };
   Node(int data)
   {
       this->data=data;
       next=NULL;
   }
};
Node* head = NULL;

void push() {
    int val;
    cout<<"Enter value to be pushed:"<<endl;
    cin>>val;
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void pop() {
    if(head==NULL)
        cout<<"Stack Underflow\n";
    else {
      cout<<"The popped element is "<< head->data <<endl;
      Node *temp=head;
      head = head->next;
      delete temp;
    }
}

void top()
{
    if(head==NULL)
        cout<<"Stack Underflow\n";
    else
      cout<<"The top element is "<< head->data <<endl;
}

void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = head;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      cout<<"choice "<<ch<<"\n";
      switch(ch) {
         case 1: push();
            break;
         case 2: pop();
            break;
         case 3: display();
            break;
         case 4: top();
             break;
         case 5: cout<<"Exit"<<endl;
            break;
         default: cout<<"Invalid Choice"<<endl;
      }
   }while(ch!=5);
   return 0;
}
