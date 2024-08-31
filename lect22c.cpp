#include <iostream>
using namespace std;

int main() {
    string s = "sagar is my roomy";
    
    int start = 0;
    
    for (int i = 0; i <= s.size(); i++) {
        if ( s[i] == ' ') {
            // Reverse the word from start to i-1
            int end = i - 1;
            while (start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
            start = i + 1; // Set start to the next character after space
        }
    }

    cout << s << endl; // Output: "ragas si ym ymoor"
    return 0;
}


