#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string s;
    while (cin >> s) {
        string sf = "";
        for (int i = s.size()-1; i >= 0; --i) sf += s[i];

        bool check1 = isPrime(stoi(s));
        bool check2 = isPrime(stoi(sf));
        if (check1 && check2 && s != sf) cout << s << " is emirp.\n";
        else if (check1) cout << s << " is prime.\n";
        else cout << s << " is not prime.\n";
    }
}
