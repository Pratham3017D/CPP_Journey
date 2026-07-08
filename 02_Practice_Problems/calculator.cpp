#include<iostream>
using namespace std;

int main(){

    //Clacutator 
    int a , b;

    cout << "Enter the valve of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform: ";
    cin >> op;

    switch(op){
        case '+': cout << "Your answer is:-  " << a + b << endl;
            break;

        case '-': cout << "Your answer is:-  " << a - b << endl;
            break;

        case '*': cout << "Your answer is:-  " << a * b << endl;
            break;

        case '/': cout << "Your answer is:-  " << a / b << endl;
            break;

        case '%': cout << "Your answer is:-  " << a % b << endl;
            break;

        default: cout << "Please Enter the valid operation"<< endl;

    }


    //Money Notes counter:
    // int n;
    // cout << "Enter ths amount in rs: ";
    // cin >> n;

    // int total = n;

    // switch(1){
    //     case 1: {
    //         int sum1 = n/100;
    //         total = total - sum1*100;
    //         cout << "Number of 100rs note required: " << sum1 << endl;
    //     }
    //     case 2: {
    //         int sum2 = total/50;
    //         total = total - sum2*50;
    //         cout << "Number of 50rs note required: " << sum2 << endl;
    //     }
    //     case 3: {
    //         int sum3 = total/20;
    //         total = total - sum3*20;
    //         cout << "Number of 20rs note required: " << sum3 << endl;
    //     }
    //     case 4: {
    //         int sum4 = total/1;
    //         total = total - sum4*1;
    //         cout << "Number of 1 rs note required: " << sum4 << endl;
    //     }
    //     default: cout << "Bhai ab paisa bhi count ho gaya... ab dost ko 'kal de dunga' mat bolna. " <<endl;
    // }


}