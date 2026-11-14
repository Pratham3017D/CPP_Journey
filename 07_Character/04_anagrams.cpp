
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "Book";
    string str2 = "kboo";

    if(str1.length() != str2.length()) {
        cout << "Not Anagrams";
        return 0;
    }

    int arr[26] = {0};

    // Count characters in first string
    for(int i = 0; i < str1.length(); i++) {

        char ch = str1[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        arr[ch - 'a']++;
    }

    // Decrease frequencies using second string
    for(int i = 0; i < str2.length(); i++) {

        char ch = str2[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        arr[ch - 'a']--;
    }

    // Check whether all frequencies are zero
    bool found = true;

    for(int i = 0; i < 26; i++) {
        if(arr[i] != 0) {
            found = false;
            break;
        }
    }

    if(found) {
        cout << "Anagrams";
    }
    else {
        cout << "Not Anagrams";
    }

    return 0;
}
