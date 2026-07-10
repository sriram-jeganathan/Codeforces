#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;

    int upper = 0, lower = 0;

    for (char c : word) {
        if (isupper(c))
            upper++;
        else
            lower++;
    }

    if (upper > lower) {
        for (char &c : word)
            c = toupper(c);
    } else {
        for (char &c : word)
            c = tolower(c);
    }

    cout << word;
    return 0;
}