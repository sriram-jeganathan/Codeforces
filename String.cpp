#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main ( void ) {
    string word;
    cin >> word;

    unordered_map<char,int> freq;

    for ( char letter : word ) {
        freq[letter]++;
    }

    for ( const auto& [key,value] : freq ) {
        if ( value > 1 ) {
            cout << key;
        } 
    }
}