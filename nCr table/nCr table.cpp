#include <iostream>
using namespace std;

const int MOD = 1000000000;

int main() {
    int T;
    for(cin >> T; T > 0; T--) {
        int n;
        cin >> n;
        int dp[n + 1][n + 1];
        for(auto i = 1; i <= n; i++) {
            dp[i][0] = 1;
            dp[i][i] = 1;
            for(auto j = 1; j < i; j++) {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
            }
        }
        for(auto i = 0; i <= n; i++) {
            cout << dp[n][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}