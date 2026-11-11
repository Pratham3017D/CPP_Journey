#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int, string> m;

    m[1]= "Pratham";
    m[13]= "Engineer";
    m[2]= "Rathore";

    m.insert({5, "Bheem"});

    for(auto i:m){  
        cout << i.first << " " << i.second << endl;
    } 


}