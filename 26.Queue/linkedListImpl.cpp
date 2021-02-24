#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* next;

        node(int val) {
            data = val;
            next = NULL;
        }
};

class Queue {

    node* front;
    node* back;

    public:
        Queue() {
            front = NULL;
            back = NULL;
        }

        void enqueue(int x) {
            node* n = new node(x);
            if(front==NULL) {
                back = n;
                front = n;
                return;
            }
            back->next = n;
            back = n;
        }

        void dequue() {
            if(front==NULL) {
                cout<<"Queue Underflow"<<endl;
            }

            node* todelete = front;
            front = front->next;

            delete todelete;
        }

        int peek() {
            if(front==NULL) {
                cout<<"No element in queue"<<endl;
                return -1;
            }

            return front->data;
        }

        bool empty() {
            if(front==NULL) {
                return true;
            }
            return false;
        }
};

int main() {

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequue();
    cout<<q.peek()<<endl;
    q.dequue();
    cout<<q.peek()<<endl;
    q.dequue();
    cout<<q.peek()<<endl;
    q.dequue();

    cout<<q.empty()<<endl;

    return 0;
}
