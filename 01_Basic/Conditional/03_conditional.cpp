#include<iostream>
using namespace std;
int main(){
// THis is to find the number is +ve, -ve or 0
    int a;
    cout << "Write the integer A to see its nature: "; 
    cin >> a;
    if (a > 0){
        cout << "A is a +vs Integer" << endl;
    }

    else if (a < 0){
        cout << "A is a -ve Integer" << endl;
    }

    else {
        cout << "A is zero" << endl;
    } 

    int a = 9;
    if (a == 9){
        cout << "Niney";
    }

    if (a > 0){
        cout << "Positive";
    }

    else {
        cout << "Negative";
    }

}