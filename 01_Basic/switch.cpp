#include<iostream>
using namespace std;

int main(){
    
    int num = 1;
    // char ch = '2';
    switch (num)
    {
    case 1: cout << "This is FIrst" << endl;
            break;

    case '2': cout << "This is Char" << endl;
              break;        
    
    default: cout << "This is Default" << endl;
        break;
    }
}