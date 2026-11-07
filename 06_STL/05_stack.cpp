#include<iostream>
#include<stack>

// Last In --> First Out

using namespace std;
int main(){
    stack<string> s;

    s.push("Pratham");
    s.push("Rathore");
    s.push("Indian");

    cout << "Printing Top Element --> " << s.top() << endl;
    
    s.pop();
    
    cout << "Printing Top Element --> " << s.top() << endl;

}