#include<iostream>
using namespace std;

int pivotIndex(int arr[], int size){
    int s = 0;
    int e = size - 1;

    while(s < e){
        int mid = s + (e - s) / 2;

        if(arr[mid] > arr[e]){
            // Pivot is on the right side
            s = mid + 1;
        }
        else{
            // Pivot is at mid or on the left side
            e = mid;
        }
    }

    return s;
}

int main(){
    int arr[5] = {7, 9, 1, 2, 3};

    int pivot = pivotIndex(arr, 5);

    cout << pivot << endl;
}