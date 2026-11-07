#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Capacity --> " << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;


    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;


    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "Size --> " << v.size() << endl;

    cout << "Before POP back" << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    
    v.pop_back(); //pop back element ko nikal ke phekh dega.


    cout << "After POP back" << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Size before Clear " << v.size() << endl;
    v.clear();
    cout << "Size After Clear " << v.size() << endl;

}