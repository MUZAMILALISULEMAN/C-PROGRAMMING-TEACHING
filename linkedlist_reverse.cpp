#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node * next;
    Node(int data=0):data(data),next(nullptr){}

};

class LinkedList{
    public:
    Node * head;
    LinkedList(Node *h=nullptr):head(h){}
    void add(int data=0){
        if(head == nullptr){
            head = new Node(data);
            return;
        }
        Node * temp = head;
        while (temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next = new Node(data);



    }
    void display(){
        Node * temp = head;
        while(temp!=nullptr){
            cout<<"->"<<temp->data;
            temp=temp->next;
        }
        cout<<endl;

    }

    void reversed(){

        Node * temp = head;
        Node * hold=nullptr ,*prev= nullptr;


        while(temp!=nullptr){

            hold = temp->next;
            temp->next = prev;
            prev = temp;


            temp = hold;

        }
        head = prev;


    }
    Node* midNode(){
        Node * temp = head;
        Node * mid = head;
        while (temp!=nullptr && temp->next!=nullptr)
        {
            mid = mid->next;
            temp = temp->next->next;
            
        }
        return mid;
    }
    Node* midNode2(){
        Node * temp = head;
        Node * mid = head;
        while (temp!=nullptr)
        {
            temp = temp->next;
            if(temp!= nullptr){
                
                temp = temp->next;
            }
            if(temp==nullptr) return mid;
            mid = mid->next;
            
        }
        return mid;
    }
   

    
void merge(LinkedList * l2);


    ~LinkedList(){
        Node *temp = head;
        Node * temp2;
        while(temp!=nullptr)
        {
            temp2 = temp->next;
            delete temp;
            temp = temp2;
            

        }

    }


};

void LinkedList::merge(LinkedList *l2){
    Node * temp = head;
    Node * temp2 = l2->head;
    Node *x,*y;


    while (temp!=nullptr && temp2!=nullptr)
    {
        if(temp->data < temp2->data){
            x = temp->next;
            temp->next = temp2;
            y = temp2->next;
            temp2->next= x;
            temp2 = y;


        }
        temp = temp->next;
    }
    

        
}
int main(){


LinkedList list;
list.add(1);
list.add(1);
list.add(3);
list.add(4);

list.add(5);list.add(6);
list.display();
// list.reversed();
// list.display();
LinkedList l2;
l2.add(2);
list.merge(&l2);
list.display();
printf("HELLO");

    return 0;
}
