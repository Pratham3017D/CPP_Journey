#include<iostream>
using namespace std;

bool isEven(){
    int num1;
    cin >> num1;

    if (num1 & 1){
        return 0;
    }
    return 1;
}

int main(){

    if (isEven()){
        cout << "The number is Even" << endl;
    }
    else {
        cout << "The numbwer is Odd" << endl;
    }
    return 0;
}