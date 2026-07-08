#include<iostream>
using namespace std;

int main(){

    char ch;
    cout << "Write your character: ";
    cin >> ch;

    if (int(ch) >= 48 && int(ch)<= 57){
        cout << "Character is Numerical" << endl;
    }
    
    else if (int(ch) >= 65 && int(ch)<= 90){
        cout << "Character is Uppercase" << endl;
    }

    else if (int(ch) >= 97 && int(ch)<= 122){
        cout << "Character is Lowercase" << endl;
    }


}