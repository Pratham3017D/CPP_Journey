#include<iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0;
    int end = size - 1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){

    for (int i= 0; i<n; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int brr[5] = { 5, 4, 3, 2, 1 };

    reverse(arr , 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


}


// void reverse(int arr[], int size){

//     for (int i = 0; i < size/2; i++){
//         int store = arr[i];
//         arr[i] = arr[size -1 - i];
//         arr[size -1 - i] = store;
//     }
    
    
// }

// void printArray(int arr[], int n){

//     for (int i= 0; i<n; i++){
//         cout << arr[i]<< " ";
//     }
//     cout << endl;
// }

// int main(){
//     int arr[6] = { 1, 2, 3, 4, 5, 6 };
//     int brr[5] = { 5, 4, 3, 2, 1 };

//     reverse(arr , 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);


// }