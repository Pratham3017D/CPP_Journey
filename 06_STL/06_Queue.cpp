#include<iostream>
#include<queue>

// First In First Out 
using namespace std;
int main(){
    queue<string> q;

    q.push("Pratham");
    q.push("Rathore");
    q.push("Indian");

    cout << "First element: " << q.front() << endl;
    q.pop();
    cout << "First element: " << q.front() << endl;


}