/*  10038 Jolly Jumpers
    judge if the seq of diff of all adj val is 1..n-1

    * the first int of lines is n
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector <int>

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n;
    while (cin >> n) {
        int prev;
        int cur;
        vi cnt;
        
        cin >> prev;
        for (int i = 1; i < n; ++i) {
            cin >> cur;
            cnt.emplace_back (abs (cur-prev));
            prev = cur;
        }

        sort (cnt.begin(), cnt.end());
        
        int i = 0;
        for (; i < cnt.size(); ++i) {
            if (i+1 != cnt[i]) {
                cout << "Not jolly\n";
                break;
            }
        }

        if (i == cnt.size())
            cout << "Jolly\n";
    }
}