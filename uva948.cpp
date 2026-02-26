#include <bits/stdc++.h>
using namespace std;

long long c;

void mul (long long A[2][2], long long B[2][2]) {
  long long f1 = A[0][0] * B[0][0] + A[0][1] * B[1][0];
  long long f2 = A[0][0] * B[0][1] + A[0][1] * B[1][1];
  long long f3 = A[1][0] * B[0][0] + A[1][1] * B[1][0];
  long long f4 = A[1][0] * B[0][1] + A[1][1] * B[1][1];
  A[0][0] = f1;
  A[0][1] = f2;
  A[1][0] = f3;
  A[1][1] = f4;
}

void pow (long long R[2][2], int n) {
  long long O[2][2] = { {0, 1}, {1, 1} };
  ++c;
  if (n == 0 || n == 1) return;
  pow(R, n / 2);
  mul(R, R);
  if (n % 2 == 1) mul(R, O);
}

long long Fib (int n) {
  long long res[2][2] = { {0, 1}, {1, 1} };
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else {
    pow(res, n - 1);
    return res[1][1];
  }
}

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int tc, num;
  while (cin >> tc) {
    for (int i = 0; i < tc; ++i) {
      cin >> num;

      vector<bool> fibBase;
      int n = num, cnt = 2;

      while (Fib(cnt) < num + 1) ++cnt;

      --cnt;
      while (cnt >= 2) {
          if (n >= Fib(cnt)) {
              fibBase.push_back(1);
              n -= Fib(cnt);
          }
          else fibBase.push_back(0);
          --cnt;
      }

      cout << num << " = ";
      for (int i = 0; i < fibBase.size(); ++i) {
          cout << fibBase[i];
      }
      cout << " (fib)\n";
    }
  }
}
