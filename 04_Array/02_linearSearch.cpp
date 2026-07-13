#include<iostream>
using namespace std;

// Linear Search

bool search(int arr[], int size, int key){


    for (int i = 0; i < size; i++){

        if(arr[i] == key){
            return 1;
        }
         
    }
    return 0;

}

int main(){

    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int key;
    cout << "Enter the Key to search for: ";
    cin >> key;

    bool found = search(arr, 10, key);
    if (found){
        cout << "Key is present in this Array." << endl;
    }
    else{
        cout << "Key is Not present in this Array." << endl;
    }
    return 0;

}