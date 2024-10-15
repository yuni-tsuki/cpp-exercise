#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n = 10000;       // 分割数
  double w = 1.0 / n;  // 小区間の幅
  double s = 0.0;      // 面積を0で初期化
  int i;
  for (i = 1; i <= n; i++) {
    double x = (i - 0.5) * w;    // 中間点のx座標
    s += 4.0 / (1.0 + x * x);  // 小区間の面積を求めてxに加算
  }
  cout << setprecision(16) << s * w << endl;
}
