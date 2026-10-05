#include<iostream>
using namespace std;

// Soved By brute Force Solution
int peakValue(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = s+ (e-s)/2;
    int peak;
    while(s<=e){
        if(arr[mid]>arr[mid-1]){
            if(arr[mid]> arr[mid+1]){
                peak = mid;
                break;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(arr[mid-1]> arr[mid-2]){
                peak = mid-1;
                break;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return peak;
}

int main(){
    int arr[7] = {1, 3, 5, 7, 6, 4, 2};

    int peak = peakValue(arr, 7);
    cout << peak << endl;


}