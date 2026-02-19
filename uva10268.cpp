#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long x;
    string s;

    while (cin >> x) {
        cin.ignore();
        getline(cin, s);

        stringstream ss(s);
        vector<long long> a;
        long long temp;
        while (ss >> temp) a.push_back(temp);

        int n = a.size() - 1;
        long long res = 0;
        
        for (int i = 0; i < n; ++i) res = res * x + a[i] * (n - i);

        cout << res << endl;
    }
}