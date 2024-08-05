// Linked List Creation and Operations
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

        Node(){
            this->data=0;
            this->next=NULL;
        }
        // Node(int d){
        //     this->data=d;
        //     this->next=NULL;
        // }
            // OR
        Node(int d):data(d),next(NULL){} // Another way to initalize class members.
};
class singlyLinkedList{
    public:
    Node* insertAtBegin(Node *head, int d){ //Function to insert node at begining
        Node *newnode = new Node(d);
        newnode->next=head;
        return newnode;
    }

    void displayList(Node *head){       //Function to display the list elements;
        Node *temp=head;
        int count=0;
        while (temp!=NULL)
        {
            cout<<temp->data<<'\t';
            temp=temp->next;
            count++;
        }
        cout<<"\nTotal Nodes: "<<count<<endl;
    }
};

int main(){
    singlyLinkedList obj;
    Node *head=NULL;
    while(true){
        system("cls");
        cout<<"1. Insert Node In Begining"<<endl;
        cout<<"2. Insert Node At End"<<endl;
        cout<<"3. Insert Node Any Position"<<endl;
        cout<<"4. Display List"<<endl;
        cout<<"5. Delete a Node from Begining"<<endl;
        cout<<"6. Delete a Node from End"<<endl;
        cout<<"7. Delete a Node from any Position"<<endl;
        cout<<"8. Search Element In List"<<endl;
        cout<<"0. To Exit"<<endl;
        int choice,val;
        cout<<"Enter Choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter Data to insert: ";
            cin>>val;
            head = obj.insertAtBegin(head,val);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
            obj.displayList(head);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 0:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice !!!";
        }
        cout<<"\n\n";
        system("pause");
    }
    return 0;
}
