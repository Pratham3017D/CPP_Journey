#include<iostream>
using namespace std;

int main(){
    
    int a = 1;
    int n;
    cout << "Input that number till you want to print: ";
    cin >> n;

    while ( a <= n){
        cout << a << " " ;
        a = a + 1;
    }
}