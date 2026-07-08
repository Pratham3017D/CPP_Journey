#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Printing numbers from 1 to " << n << "...." << endl;
    
    for(int i = 1; i <=n; i++){
        cout << i << endl;
    }
}