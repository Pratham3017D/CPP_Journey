#include<iostream>
using namespace std;

int firstoccurance(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[6] = {1,2,3,3,3,5};
    int odd[5] = {1,2,2,3,5};

    int firstOcc = firstoccurance(even, 6, 3);
    int lastOcc = lastOccurance(even, 6, 3);

    cout << "First Occurance is " << firstOcc << " last Occurance is " << lastOcc << endl;
    
    int firstOcc1 = firstoccurance(odd, 5, 2);
    int lastOcc1 = lastOccurance(odd, 5, 2);

    cout << "First Occurance is " << firstOcc1 << " last Occurance is " << lastOcc1 << endl;


}