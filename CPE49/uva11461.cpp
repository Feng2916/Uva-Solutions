/*  11461 Square Numbers
    calc square nums in [a, b]
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int a, b;
    while (cin >> a >> b && (a || b))
        cout << ((int) sqrt (b))-((int) sqrt (a-1)) << '\n';
}