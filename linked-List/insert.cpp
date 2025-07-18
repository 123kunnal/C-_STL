#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=nullptr;
    }

};
int main(){
    int arr[]={1,2,3,4};
    Node *head=nullptr;
    for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
        if(head==nullptr){
                 head=new Node(arr[i]);     
        }
        else{
            Node *temp=new Node(arr[i]);            
            temp->next=head;
            head=temp;
        }
    }
   // Print the linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

}
