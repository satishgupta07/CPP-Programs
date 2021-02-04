#include<iostream>
using namespace std;

class Student {
    string name;
    public:
    int age;
    bool gender;

    void setName(string s) {
        name = s;
    }

    void printInfo() {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};

int main() {

    // Student a;
    // a.name = 'Urvi';
    // a.age = 21;
    // a.gender = 1;

    Student arr[3];
    for(int i=0; i<3; i++) {
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }

    cout<<"-------------------"<<endl;
    for(int i=0; i<3; i++) {
        arr[i].printInfo();
    }

    return 0;
}