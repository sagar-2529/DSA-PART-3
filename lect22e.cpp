#include <iostream>
#include <string>
using namespace std;

void getstring(string &s) {
    size_t original_size = s.size();
    size_t new_size = original_size;

    // Calculate the new size of the string
    for (char c : s) {
        if (c == ' ') {
            new_size += 2; // Each space adds "@40", which is 3 characters, so we add 2
        }
    }

    s.resize(new_size); // Resize the string to the new size

    // Replace spaces with "@40"
    size_t j = 0; // Current index in the modified string
    for (size_t i = 0; i < original_size; ++i) {
        if (s[i] == ' ') {
            s[j++] = '@';
            s[j++] = '4';
            s[j++] = '0';
        } else {
            s[j++] = s[i];
        }
    }
}

int main() {
    string name = "sagar is t";
    getstring(name);
    cout << name << endl;
    return 0;
}
