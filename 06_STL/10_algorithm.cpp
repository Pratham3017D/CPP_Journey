#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(22);
    v.push_back(1);
    v.push_back(13);
    v.push_back(4);
    v.push_back(25);
    
    
    sort(v.begin(), v.end());
    for(int i:v){
        cout << i << " " ;
    }
    cout << endl;

    
    if(binary_search(v.begin(), v.end(), 4) ){
        cout << "4" << " is present." << endl;
    }




}