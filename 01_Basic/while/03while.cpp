#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 2;

    while (i < n){
        if (n%i==0){
            cout << "The number " << n << " is not a prime number." << endl;
            break;
        }
        else{
            cout << "The number " << n << " is a prime number." << endl;
            break;
        }
        i = i+1;
    }
}