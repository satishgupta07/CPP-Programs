#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto element:v) {
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();
    for(auto element:v) {
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int> v2 (3, 50);
    for(auto element:v2) {
        cout<<element<<" ";
    }
    cout<<endl;

    swap(v,v2);
    cout<<"Swap : "<<endl;
    for(auto element:v) {
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v2) {
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int> vector;
    vector.push_back(4);
    vector.push_back(8);
    vector.push_back(3);
    vector.push_back(6);
    sort(vector.begin(),vector.end());
    cout<<"Sorting : "<<endl;
    for(auto element:vector) {
        cout<<element<<" ";
    }


    return 0;
}