#include<iostream>
#include <math.h>
using namespace std;

int main(){

    //Decimal to Binary;
    // int n;
    // cin >> n;
    // int answer = 0;
    
    // int place = 1;

    // while (n != 0) {
    // int bit = n & 1;
    // answer += bit * place;
    // place *= 10;
    // n >>= 1;
    // }
    // cout << answer << endl;      


    //Binary to decimal 
    int n;
    cin >> n;

    int answer = 0;
    int i = 0;

    while (n != 0) {

        int digit = n % 10;

        answer = answer + digit * (int)pow(2, i);

        n = n / 10;
        i++;
    }

    cout << answer << endl;
    
}