#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 2;
    int n;
    cout << "Enter the number till you want to add: ";
    cin >> n;

    while ( i <= n){
        sum = sum +i;
        i = i + 2;
    }

    cout << sum << endl;
}