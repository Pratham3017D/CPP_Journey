#include<iostream>
#include<queue>
// Priority Queue me hamesha first element greatest hota hai 
using namespace std;
int main(){
    // Max Heap
    priority_queue<int> maxi;
    
    // Min Heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n = maxi.size();
    for(int i = 0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout<<endl;
    
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    mini.push(5);
    int m = mini.size();
    for(int i = 0; i<m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout<<endl;

}