/*  10929 You can say 11
    judge if "large num" N is multiple of 11
    (sum of odd pos of digits)-(sum of even pos of digits) = multiple of 11
 */

#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    string N;
    while (cin >> N && N != "0") {
        int cnt = 0;

        for (int i = 0; i < N.size(); ++i)
            (i%2)? cnt += N[i]-'0': cnt -= N[i]-'0';

        cout << N << ((abs (cnt)%11 == 0)? " is": " is not") << " a multiple of 11.\n";
    }
}