/*  10235 Simply Emirp
    judge N is emirp/prime/composite num
    emirp: N is prime && reverse N is prime && N != reverse N
    prime: N is prime && N is not emirp
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// check prime O(sqrt(n))
bool isPrime(int n) {
    if (n <= 3)  // 1, 2, 3
        return n > 1;
    if (n%2 == 0 || n%3 == 0)  // 2k, 3k, k > 0
        return 0;

    for (int i = 5; i*i <= n; i += 6) {  // 6k-1, 6k+1, k > 0
        if (n%i == 0 || n%(i+2) == 0)
            return 0;
    }

    return 1;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    while (cin >> N) {
        int oriN = N;
        string strN = to_string (N);
        reverse (strN.begin(), strN.end());
        int revN = stoi (strN);

        cout << N << " is ";
        if (isPrime (oriN)) {
            if (isPrime (revN) && oriN != revN)
                cout << "emirp.\n";
            else
                cout << "prime.\n";
        }
        else
            cout << "not prime.\n";
    }
}