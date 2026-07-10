#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing The Array:" << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done." << endl;
}

int main(){
    // int dog[15];

    // cout << dog[5] << endl;

    // int second[3] = {5, 7, 11};
    // cout << endl << second[2] << endl;

    // int n;
    // cin >> n;
    // int numbers[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    // cout << numbers[n-1] << endl;


    // Did this with the help of Functions.
    
    int first[4] = {1, 2, 3, 4};
    printArray(first, 4);

    
}