/*  10222 Decode the Mad man
    replace characters with the ones 2 spaces to the left
    without pressing shift
    preserving spaces
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    string encode = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    string decode = " `1234567890qwertyuiop[asdfghjklzxcvbnm,";

    char ch;
    while (cin.get (ch)) {
        auto it = find (encode.begin(), encode.end(), tolower (ch));
        if (it != encode.end())
            cout << decode[it-encode.begin()];
    }
    cout << '\n';
}