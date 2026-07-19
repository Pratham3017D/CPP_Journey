#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = (size + end)/2;
    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;

    }
    return -1;
    
    
}

int main(){

    int even[6] = {12, 36, 54, 89, 97, 104};
    int odd[5] = { 11, 22, 43, 54, 85};

    int key_even;
    cout << "Enter the Key for even: ";
    cin >> key_even;

    cout << binarySearch(even, 6, key_even) << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    
    int key_odd;
    cout << "Enter the Key for odd: ";
    cin >> key_odd;

    cout << binarySearch(odd, 5, key_odd) << endl;


    return 0;
}
