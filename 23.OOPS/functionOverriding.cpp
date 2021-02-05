#include "bits/stdc++.h"
using namespace std;

class Base {
    public:
        virtual void print() {
            cout<<"this is the base class print function"<<endl;
        }
        void display() {
            cout<<"this is the base class display function"<<endl;
        }
};

class Derived: public Base {
    public:
        void print() {
            cout<<"this is the derived class print function"<<endl;
        }
        void display() {
            cout<<"this is the derived class display function"<<endl;
        }
};

int32_t main() {

    Base *baseptr;
    Derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();

    return 0;
}