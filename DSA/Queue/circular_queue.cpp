#include<iostream>
using namespace std;

class circularQueue {
    int* arr;
    int currSize = 0, cap;
    int f =0, r =-1;

public:
    circularQueue (int size){
        cap = size;
        arr = new int[cap];
        f = 0;
        r = -1;
    }

    void push(int data){
        if(currSize == cap){
            cout << "CQ is Full";
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout << "CQ is empty";
            return;
        }
        f = (f+1)% cap;
        currSize--;
    }

    int front(){
        if(currSize == 0){
            return-1;
        }
        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void print(){
        for(int i =0;i<cap;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main (){
    circularQueue q(3);
    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();
    q.push(4);


    q.print();
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}