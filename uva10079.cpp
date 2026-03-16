// 0 cuts -> 1 piece
// 1 cut -> 1+1=2 pieces
// 2 cuts -> (1+1)+2=4 pieces
// 3 cuts -> (1+1+2)+3=7 pieces
// n cuts -> (1+1+2+...+(n-1))+n=1+(1+2+...+(n-1)+n)=1+n*(n+1)/2 pieces

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    long long N;
    while (cin >> N && N >= 0) cout << 1+N*(N+1)/2 << '\n';
}