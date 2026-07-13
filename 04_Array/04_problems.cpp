#include<iostream>
using namespace std;

void swap_Element(int arr[], int size){

    int start = 0;
    while(start < size - 1){
        swap(arr[start], arr[start + 1]);
        start += 2;
    }
}

void printArray(int arr[], int n){

    for (int i= 0; i<n; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int arr[5] = { 1, 2, 3, 4, 5};
    int brr[6] = {12, 36, 54, 89, 7, 4};

    swap_Element(arr, 5);
    swap_Element(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);
}

