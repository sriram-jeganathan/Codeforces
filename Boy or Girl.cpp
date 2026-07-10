#include <iostream>
#include <unordered_map>
using namespace std;

int getUniqueCount(string word) {
    unordered_map<char, int> letters;

    for (char letter : word) {
        letters[letter]++;
    }

    return letters.size();
}

int main() {
    string word;
    cin >> word;

    int unique = getUniqueCount(word);

    if (unique % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}