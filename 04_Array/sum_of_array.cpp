#include<iostream>
using namespace std;

int sum_of_array(int arr[], int size){
    int sum = 0;
    for (int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int size;
    cout << "Enter size between 1-100: ";
    cin >> size;

    if (size < 1 || size > 100)
    {
        cout << "Invalid size";
        return 0;
    }

    int num[100];
    for (int i = 0; i<size; i++){
        cout << "Enter the number on index " << i << " :   ";
        cin >> num[i];
    }

    cout << "Sum of all the elements of Array is: " << sum_of_array(num,size) << endl;

    return 0;

}


