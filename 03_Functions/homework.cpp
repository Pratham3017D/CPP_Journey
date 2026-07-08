#include<iostream>
using namespace std;

//AP
// int nthTerm(int n){
//     return 3*n + 7;
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << nthTerm(n) << endl;
// }


//Total no. of set bit in a and b
// int countsetbits(int n){
//     int answer = 0;
//     while ( n != 0){
//         int bit = n&1;
//         answer = answer + bit;
//         n = n >> 1;
//     }
//     return answer;
// }

// int main(){
//     int a , b;
//     cin  >> a >> b;

//     int bits = countsetbits(a) + countsetbits(b);
//     cout << bits << endl;
// }


// Fabonachi Series
void fabo(int n){
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i <= n; i++){

        int nextNumber = a + b;
        cout << nextNumber << " "; 

        a = b;
        b = nextNumber;
    }
    
}

int main(){
    int n;
    cin >> n;
    fabo(n);
}

