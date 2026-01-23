#include <bits/stdc++.h>
using namespace std;

void print (int n, bool &first) {
    int lakh = n / 100000; n %= 100000;
    int hajar = n / 1000; n %= 1000;
    int shata = n / 100; n %= 100;
    int rest = n;
    if (lakh) {
        if (!first) cout << ' ';
        else first = 0;
        cout << lakh << " lakh";
    }
    if (hajar) {
        if (!first) cout << ' ';
        else first = 0;
        cout << hajar << " hajar";
    }
    if (shata) {
        if (!first) cout << ' ';
        else first = 0;
        cout << shata << " shata";
    }
    if (rest) {
        if (!first) cout << ' ';
        else first = 0;
        cout << rest;
    }
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    long long num;
    int cnt = 1;
    while (cin >> num) {
        cout << setw(4) << cnt << ". ";
        ++cnt;

        bool firstNum = 1;
        int third = num % 10000000;
        int second = num / 10000000 % 10000000;
        int first = num / 10000000 / 10000000 % 10000000;

        print(first, firstNum);
        if (first) cout << " kuti";
        print(second, firstNum);
        if (first || second) cout << " kuti";
        print(third, firstNum);
        if (!first && !second && !third) cout << 0;
        cout << '\n';
    }
}
