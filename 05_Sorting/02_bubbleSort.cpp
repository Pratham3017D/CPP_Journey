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

void bubbleSort(int arr[], int n){
    bool swapped = false;
    for (int i = 1; i<n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){  //Optimisation 
            break;
        }
    }

}

int main(){
    int arr[5] = {6,2,4,8,10};
    // int n = 5;
    int brr[6] = {1,2,3,4,5,6};
    bubbleSort(arr, 5);
    printArray(arr, 5);

    cout << "The second array" << endl;
    bubbleSort(brr, 6);
    printArray(brr, 6);
}