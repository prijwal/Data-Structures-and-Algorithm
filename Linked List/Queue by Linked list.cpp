#include <iostream>
using namespace std;
struct Node {
   int data;
   Node *next;
   Node(){
       next=NULL;
   }
   Node(int data)
   {
       this->data=data;
       next=NULL;
   }
};
Node* front = NULL;
Node* rear = NULL;
Node* temp;
void push() {
   int val;
   cout<<"Insert the element in queue : "<<endl;
   cin>>val;
   if (rear == NULL) {
      rear = new Node(val);
      front = rear;
   } 
   else {
      temp=new Node(val);
      rear->next = temp;
      rear = temp;
   }
}
void pop() {
   temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   {
       if (temp->next != NULL) {
          temp = temp->next;
          cout<<"Element deleted from queue is : "<<front->data<<endl;
          free(front);
          front = temp;
       } 
       else {
          cout<<"Element deleted from queue is : "<<front->data<<endl;
          free(front);
          front = NULL;
          rear = NULL;
       }
   }
}
void Front(){
   if (front == NULL) 
      cout<<"Underflow"<<endl;
   else
       cout<<"front element is "<<front->data<<"\n";
}
void display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main() {
   int ch;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      cout<<"your choice is "<<ch<<endl;
      switch (ch) {
         case 1: push();
         break;
         case 2: pop();
         break;
         case 3: display();
         break;
         case 4: Front();
         break;
         case 5: cout<<"Exit "<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=5);
   return 0;
}
