#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
    cin.tie(0)->sync_with_stdio(0);
    // freopen ("in.txt", "r", stdin);

    string name1, name2;
    while (getline (cin, name1) && getline (cin, name2)) {
        int value1 = 0.0, value2 = 0.0;

        for (char c: name1) {
            if (isalpha (c)) {
                value1 += tolower (c)-'a'+1;
            }
        }

        for (char c: name2) {
            if (isalpha (c)) {
                value2 += tolower (c)-'a'+1;
            }
        }

        double digitSum1 = 0.0, digitSum2 = 0.0;

        if (value1%9 && value1) {
            digitSum1 = value1%9;
        }
        else if (value1) {
            digitSum1 = 9;
        }

        if (value2%9 && value2) {
            digitSum2 = value2%9;
        }
        else if (value2) {
            digitSum2 = 9;
        }

        if (digitSum1 > digitSum2) {
            swap (digitSum1, digitSum2);
        }

        double res = (digitSum1 && digitSum2)? digitSum1/digitSum2*100.0: 0.0;
        cout << fixed << setprecision (2) << res << " %\n";
    }
}