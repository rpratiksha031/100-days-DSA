// if we have "aaaaabbcc" return "a5b2c2"
#include <iostream>
#include <string>
using namespace std;

int main (){
    string s;
    cin >> s;

    string compressed = "";
    int count = 1;

    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            compressed += s[i - 1];
            compressed += to_string(count);
            count = 1;
        }
    }

    // Handle the last character
    compressed += s[s.length() - 1];
    compressed += to_string(count);

    cout << compressed << endl;

    return 0;
}