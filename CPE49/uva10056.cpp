/*  10056 What is the Probability?
    formula:
        P = p*(1-p)^(I-1)/(1-(1-p)^N)

    * p can be 0
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int S;
    cin >> S;

    for (int i = 0; i < S; ++i) {
        double N, p, I;
        cin >> N >> p >> I;

        double res = 0.0;
        if (p)
            res = p*pow (1-p, I-1)/(1-pow (1-p, N));

        cout << fixed << setprecision (4) << res << '\n';
    }
}