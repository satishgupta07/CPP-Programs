#include<iostream>
using namespace std;

class Student {

    string name;

    public:
    int age;
    bool gender;

    Student() {
        cout<<"Default Constructor"<<endl;
    }

    Student(string s, int a, int g) {   // parameterized constructor
        cout<<"Parameterized Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    Student(Student &a) {               // Copy Contructor
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~Student() {                      //Destructor
        cout<<"Destructor Called"<<endl;
    }

    void setName(string s) {
        name = s;
    }

    void getName() {
        cout<<name<<endl;
    }

    void printInfo() {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};

int main() {

    Student a("Urvi", 20, 1);
    a.getName();

    Student b;

    Student c = a;
    c.printInfo();

    return 0;
}