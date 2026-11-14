#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1 = "book";
    string str2 = "kboo";

    if (str1.size() != str2.size()) {
        cout << "Not Anagrams";
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "Anagrams";
    }
    else {
        cout << "Not Anagrams";
    }

    return 0;
}
