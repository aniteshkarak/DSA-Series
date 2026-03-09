#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }

};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        }
        else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(int val){
        if(head == NULL){
            cout << "Dil is empty";
        }
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
    void pop_back(int val){
        if(head == NULL){
            cout << "Dil is empty";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<" <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main (){
    DoublyList dil;
    dil.push_front(1);
    dil.push_front(2);
    dil.push_front(3);

    dil.push_back(0);
    dil.push_back(-1);

    dil.pop_front(3);
    dil.pop_front(2);

    dil.pop_back(-1);
    dil.pop_back(0);

    dil.print();
    return 0;
}