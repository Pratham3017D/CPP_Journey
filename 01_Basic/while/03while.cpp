#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 2;

    while (i < n){
        if (n%i==0){
            cout << "The number " << n << " is not a prime number." << endl;
        }
        else{
            cout << "The number " << n << " is a prime number." << endl;
        }
        i = i+1;
    }
}