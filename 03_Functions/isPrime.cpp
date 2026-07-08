#include<iostream>
using namespace std;

bool isPrime(int n){
    
    for (int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
        return 1;
    }

}


int main(){
    int n;
    cin >> n;
    bool number_check = isPrime(n); 
    if (number_check == 0){
        cout << "The number is not Prime" << endl;
    }
    else{
        cout << "The number is Prime"<< endl;
    }
}